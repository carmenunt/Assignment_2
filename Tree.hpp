#ifndef UNTITLED6_TREE_HPP
#define UNTITLED6_TREE_HPP


class Tree {
    Node root;
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
