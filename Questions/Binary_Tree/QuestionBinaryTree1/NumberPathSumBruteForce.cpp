#include<iostream>
using namespace std;

class TreeNode{
    public:

    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        value = x;
        left = NULL;
        right = NULL;
    }
};

class Solution{
    public:

    int countFromNode(TreeNode* root, int currSum, int targetSum){

        if(root == NULL) return 0;

        currSum += root->value;
        int count = 0;

        if(currSum == targetSum) count++;

        count += countFromNode(root->left, currSum, targetSum);
        count += countFromNode(root->right, currSum, targetSum);

        return count;
    }

    int pathSum(TreeNode* root, int targetSum){
        if(root == NULL) return 0;

        return countFromNode(root, 0, targetSum)
        + pathSum(root->left, targetSum)
        + pathSum(root->right, targetSum);
    
    };

};

int main(){

     /*
            10
           /  \
          5   -3
         / \    \
        3   2    11
       / \   \
      3  -2   1

    Target = 8
    Answer = 3
    */

    TreeNode* root = new TreeNode(10);

    root->left = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(3);
    root->left->left->right = new TreeNode(-2);

    root->left->right = new TreeNode(2);
    root->left->right->right = new TreeNode(1);

    root->right = new TreeNode(-3);
    root->right->right = new TreeNode(11);

    Solution obj;

    cout << "Number of Paths = " << obj.pathSum(root, 8);

    return 0;
}