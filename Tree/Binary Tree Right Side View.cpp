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
    void depth(vector<int>&ans,TreeNode* root,int l)
    {
        if(!root){
            return;
        }
        if(l==ans.size())
        {
            ans.push_back(root->val);
        }
        depth(ans,root->right,l+1);
        depth(ans,root->left,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
       vector<int>ans;
       if(root==NULL)
        return ans;
        depth(ans,root,0);
       return ans;
    }
};