/*
    !  Preorder Traversal:-
    1: visit root node
    2: left subtree
    3: right subtree
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
        left = right = NULL;
    }
};

void preorderTraversal(Node* rootNode){

    // base case
    if(rootNode == NULL){
        return;
    }

    cout<<rootNode->value<<" ";
    // recursive case
    preorderTraversal(rootNode->left);
    preorderTraversal(rootNode->right);
};

int main(){

    Node*  rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    preorderTraversal(rootNode);

    return 0;
}