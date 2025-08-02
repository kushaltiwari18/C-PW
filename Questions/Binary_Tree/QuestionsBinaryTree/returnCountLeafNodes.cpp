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

int leafNode(Node* rootNode){

    // base case
    if(rootNode==NULL){
        return 0;
    }

    if(rootNode->left == NULL && rootNode->right == NULL ){
        return 1;
    }

    // recursive case
    int leftSubtreeLeafNodes = leafNode(rootNode->left);
    int rightSubtreeLeafNodes = leafNode(rootNode->right);
    return leftSubtreeLeafNodes + rightSubtreeLeafNodes;
}

int main(){

Node* rootNode = new Node(2);
rootNode->left = new Node(4);
rootNode->right = new Node(10);
rootNode->left->left = new Node(6);
rootNode->left->right = new Node(5);
rootNode->right->right = new Node(11);

cout<<leafNode(rootNode)<<endl;

    return 0;
}