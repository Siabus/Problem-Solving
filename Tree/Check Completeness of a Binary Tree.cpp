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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool f=false;

        while(!q.empty())
        {
            TreeNode* tmp=q.front();
            q.pop();

            if(tmp->left)
            {
                if(f==true)
                    return false;
                q.push(tmp->left);
            }
            else
                f=true;

                if(tmp->right)
                {
                    if(f==true)
                        return false;
                    q.push(tmp->right);
                }
                else 
                    f=true;
        }
        return true;
    }
};