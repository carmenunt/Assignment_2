#ifndef UNTITLED6_TREE_HPP
#define UNTITLED6_TREE_HPP
#include "List.hpp"
#include "TrieNode.hpp"


class Tree {

public:
    Tree();
    static const int ALPHABET_SIZE = 28;
    TrieNode *getNode(void);
    void insert(TrieNode *root, string key);
    bool search(struct TrieNode *root, string key);
    ~Tree();
};


#endif //UNTITLED6_TREE_HPP
