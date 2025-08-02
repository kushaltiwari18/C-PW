/*
    Inorder Traversal :
    1: Visit left subtree
    2: Visit Root Node
    3: Visit Right Node

*/

#include<iostream>
using namespace std;

class Node{
    public:

    int value;
    Node* left;
    Node* right;
    Node(int v){
        value = v;
        left=right=NULL;
    }
};

void inorderTraversal(Node* rootNode){

    // base case
    if(rootNode==NULL){
        return;
    }

    // recursive case
    inorderTraversal(rootNode->left);
    cout<<rootNode->value<<" ";
    inorderTraversal(rootNode->right);
};

int main(){

    Node* rootNode =  new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    inorderTraversal(rootNode);


    return 0;
}