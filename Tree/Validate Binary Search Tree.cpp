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
vector<int>ans;
    void inorder(TreeNode* root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            ans.push_back(root->val);
            inorder(root->right);
        }
    }
    bool isValidBST(TreeNode* root) {
        inorder(root); 
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i-1]>=ans[i])
                return false;
        }
     
     return true;
    }
};