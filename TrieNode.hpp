#ifndef UNTITLED6_TRIENODE_HPP
#define UNTITLED6_TRIENODE_HPP

static const int ALPHABET_SIZE = 28;
struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];
    bool isEndOfWord;
};


#endif //UNTITLED6_TRIENODE_HPP
