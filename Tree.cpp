#include "Tree.hpp"
#include "Node.hpp"


Tree::Tree()
{
    root = nullptr;


}

Node Tree::parent(Node n, Tree T)
{


}

Node Tree::leftmostChild(TreeNode* current)
{
    if (current == nullptr){
        cout << "Error the  Tree is empty\n";
        return -1;
    }

    while(current->left != nullptr){
        current = current->left;
    }
    return current -> element;

}

Node Tree::rightSibling(TreeNode* current)
{
    if(current == nullptr){
        cout << "Error the tree is empty";
        return -1;
    }
    current = current->right ;
    return current->element;



}

// label(n,T);
// create();

Node Tree::getRoot()
{
    return root;
}

Tree::~Tree()
{}