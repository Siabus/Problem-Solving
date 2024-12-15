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
    vector<vector<int>>ans;

    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        if(root){
            q.push(root);
        }
        while(!q.empty())
        {
            int l=q.size();
            vector<int> tmp;
            for(int i=0;i<l;i++)
            {
                TreeNode* fr=q.front();
                if(fr->left)
                     q.push(fr->left);
                if(fr->right)
                     q.push(fr->right);
                tmp.push_back(fr->val);
                q.pop();

            }
            ans.push_back(tmp);
        }
        return ans;
    }  
};


