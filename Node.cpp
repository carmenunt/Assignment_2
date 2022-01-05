#include "Node.hpp"
struct BstNode{
    char element;
    BstNode* left;
    BstNode* right;
};

BstNode* Node::GetNewNode(char element){
    BstNode* newNode = new BstNode();
    newNode->data = element;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;