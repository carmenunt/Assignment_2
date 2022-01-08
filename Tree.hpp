#ifndef UNTITLED6_TREE_HPP
#define UNTITLED6_TREE_HPP
#include "Node.hpp"
#include "List.hpp"


class Tree {
    TreeNode* root;
public:
    Tree();
    Node parent(Node n, Tree T);
    Node leftmostChild(Node n, tree T);
    Node rightSibling(Node n, tree T);
    // label(n,T);
    // create();
    Node getRoot();
    ~Tree();
};


#endif //UNTITLED6_TREE_HPP
