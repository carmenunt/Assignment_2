#include "Node.hpp"
struct TreeNode{
    char element;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* Node::GetNewNode(char element){
    TreeNode* newNode = new TreeNode();
    newNode->element = element;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;