#include<bits/stdc++.h>
using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
class Solution {
public:
     int numTrees(int n) {
        if(n==1||n==0)
            return 1;
        
        int res=0;
        for(int i=0;i<n;i++) {
            res += numTrees(i)*numTrees(n-i-1);
        }
        return res;
    }
};