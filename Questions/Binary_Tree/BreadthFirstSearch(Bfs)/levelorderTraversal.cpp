/*
    We use queue to track child left and right.
    we are using Queue, because of FIFO property

*/

#include<iostream>
#include<queue>
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

void levelorderTraversal(Node* rootNode){
    // base case
    if(rootNode == NULL){
        return;
    }

    queue<Node*> q;
    q.push(rootNode);

    while(!q.empty()){

        int nodesAtCurrentLevel = q.size();
        while(nodesAtCurrentLevel--){
            Node* currNode = q.front();
            q.pop();
            if(currNode->left){
                q.push(currNode->left);
            }
            if(currNode->right){
                q.push(currNode->right);
            }
            cout<<currNode->value<<" ";
        }
        cout<<endl;
    }
}

int main(){

    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    levelorderTraversal(rootNode);

    return 0;
}