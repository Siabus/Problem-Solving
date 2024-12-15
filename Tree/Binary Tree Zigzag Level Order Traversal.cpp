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
vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
{
    vector<vector<int>>ans;
    if(root!=NULL)
    {
        return ans;
    } 
    deque<TreeNode*>q;
    int lvl=0;
    q.push_back(root);
    while(!q.empty())
    {
        int l=q.size();
        vector<int>tmp;
        for(int i=0;i<l;i++)
        {
            if(lvl%2==0)
            {
                TreeNode* node= q.back();
                q.pop_back();
                tmp.push_back(node->val);
                if(node->left)
                     q.push_front(node->left);
                if(node->right) 
                    q.push_front(node->right);

            }
            else
            {
                TreeNode* node= q.front();
                q.pop_front();
                tmp.push_back(node->val);
                if(node->right)
                     q.push_back(node->right);
                if(node->left) 
                    q.push_back(node->left);

            }
        }
        lvl++;
        ans.push_back(tmp);
    }   
    return ans;
    }
};