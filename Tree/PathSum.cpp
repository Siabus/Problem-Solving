#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        else if(root->val==targetSum && root->left==NULL && root->right==NULL)
            return true;
        else 
        {
            int cs=targetSum-root->val;
            return hasPathSum(root->left,cs)||hasPathSum(root->right,cs);
        }
    }
};