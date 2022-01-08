#include "Tree.hpp"
#include "Node.hpp"


Tree::Tree()
{
    root = nullptr;


}

Node Tree::parent(Node n, Tree T)
{


}

Node Tree::leftmostChild(Node* current)
{
    if (current == nullptr){
        cout << "Error the  Tree is empty\n";
        return -1;
    }

    while(current->left != nullptr){
        current = current->left;
    }
    return current -> data;

}

Node Tree::rightSibling(Node n, tree T)
{

}

// label(n,T);
// create();

Node Tree::getRoot()
{
    return root;
}

Tree::~Tree()
{}