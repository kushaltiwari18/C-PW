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

class BST{
    public:
    Node* root;

    BST(){
        root=NULL;
    }
};

// void insertBST(Node* &root, int val){

//     Node* newNode = new Node(val);
    
//     if(root == NULL){
//         root = newNode;
//         return;
//     }

//     Node* current = root;
//     while(true){
//         if(current->value > val){
//             if(current->left ==  NULL){
//                 current->left = newNode;
//                 return;
//             };
//             current=current->left;
//         }else{
//             if(current->right == NULL){
//                 current->right = newNode;
//                 return;
//             }
//             current = current->right;
//         }
//     }
// };


Node* insertBST(Node* root, int val){
    // base case
    if(root == NULL){
        Node* newNode = new Node(val);
        return newNode;
    }

    // recursive call
    if(root->value > val){
        root->left = insertBST(root->left, val);
    }else if(root->value < val){
        root->right = insertBST(root->right, val);
    }
    return root;
}

Node* largestNodeBST(Node* root){
    Node* curr = root;
    while(curr && curr->right != NULL){
        curr = curr->right;
    }
    return curr;
}

Node* deleteBST(Node* root, int key){

    if(root == NULL) return root;
    
    if(root->value < key){
        root->right = deleteBST(root->right, key);
    }
    else if(root->value > key){
        root->left = deleteBST(root->left, key);
    }
    else{
        // root is the node to be deleted
        if(root->left == NULL && root->right == NULL){
            // node has 0 child node
            free(root);
            return NULL;
        }
        // node has 1 child node
        else if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        // node has 2 child nodes
        else{
        Node* justSmallerNode = largestNodeBST(root->left);
        root->value = justSmallerNode->value;
        root->left = deleteBST(root->left, justSmallerNode->value);
        }
    }
    return root;
};

void inorderTraversal(Node* root){
    if(root == NULL) return;

    inorderTraversal(root->left);
    cout<<root->value<<" ";
    inorderTraversal(root->right);
};

int main(){
    
    BST bst1;
    // insertBST(bst1.root,3);
    // insertBST(bst1.root, 1);
    // insertBST(bst1.root, 4);
    // insertBST(bst1.root, 6);
    // insertBST(bst1.root, 2);

    bst1.root = insertBST(bst1.root,3);
    insertBST(bst1.root, 1);
    insertBST(bst1.root, 4);
    insertBST(bst1.root, 6);
    insertBST(bst1.root, 2);
    inorderTraversal(bst1.root);
    cout<<endl;
    deleteBST(bst1.root, 4);
    inorderTraversal(bst1.root);
    return 0;
}