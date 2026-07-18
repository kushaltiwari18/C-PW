#include<iostream>
#include<unordered_map>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        val = value;
        left = NULL;
        right = NULL;
    }
};

class Solution{
    public:

    int pathSumHelper(TreeNode* root, int targetSum, long int currSum, unordered_map<long int, int> pathCount){
        if(root == NULL){
            return 0;
        }

        currSum += root->val;
        int ansCount = pathCount[currSum - targetSum];

        pathCount[currSum]++;
        ansCount += pathSumHelper(root->left, targetSum, currSum, pathCount) +
        pathSumHelper(root->right, targetSum, currSum, pathCount);

        pathCount[currSum]--;
        return ansCount;
    }


int pathSum(TreeNode* root, int targetSum){
    unordered_map<long int, int> pathCount;
    pathCount[0] = 1;
    return pathSumHelper(root, targetSum, 0, pathCount);
}

};

int main(){

        /*
            10
           /  \
          5   -3
         / \    \
        3   2    11
       / \   \
      3 -2    1

    Target Sum = 8
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
    cout<<"Number of path: "<<obj.pathSum(root, 8)<<endl;

    return 0;
}