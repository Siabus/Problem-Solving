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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*>cur;
        cur.push(root);
        int lmax=0;
        vector<int>ans;

        while(!q.empty())
        {
            for(int i=0;i<q.size();i++)
            {
                TreeNode* node=q.front();
                q.pop();
                lmax=max(lmax,node->val);

                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            ans.push_back(lmax);
        }
        return ans;
    }
};