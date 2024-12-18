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
    TreeNode* getsuccessor(TreeNode* curr)
    {
        curr=curr->right;
        while(curr!=NULL && curr->left!=NULL)
        {
            curr=curr->left;
        } 
        return curr;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return root;
        if(root->val>key)
            root->left=deleteNode(root->left,key);
        else if(root->val<key)
            root->right=deleteNode(root->right,key);
        else 
        {
            if(root->left==NULL)
            {
                TreeNode* tmp=root->right;
                delete root;
                return tmp; 
            }
            if(root->right==NULL)
            {
                TreeNode* tmp=root->left;
                delete root;
                return tmp;
            }
            TreeNode* suc=getsuccessor(root);
            root->val=suc->val;
            root->right=deleteNode(root->right,suc->val);
        }
        return root;
    }
};