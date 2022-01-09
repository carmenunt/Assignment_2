#include "Tree.hpp"
#include "TrieNode.hpp"

Tree::Tree()
{}
TrieNode* Tree::getNode(void)
{
    TrieNode *pNode =  new TrieNode;

    pNode->isEndOfWord = false;

    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = nullptr;

    return pNode;
}

void Tree::insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    key = "ñ";
    for (int i = 0; i < key.length(); i++)
    {
        int index;
        if (to_string(key[i]) == "\u00F1")
        {
            index = 27;
        } else if (to_string(key[i]) == "\u00FC")
        {
            index = 28;
        }else
        {
            index = key[i] - 'a';
        }
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();

        pCrawl = pCrawl->children[index];
    }

    // mark last node as leaf
    pCrawl->isEndOfWord = true;
}

bool Tree::search(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index;
        if (to_string(key[i]) == "\u00F1")
        {
            index = 27;
        } else if (to_string(key[i]) == "\u00FC")
        {
            index = 28;
        }else
        {
            index = key[i] - 'a';
        }
        if (!pCrawl->children[index])
            return false;

        pCrawl = pCrawl->children[index];
    }

    return (pCrawl->isEndOfWord);
}
Tree::~Tree()
{}