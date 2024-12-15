#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fact(int n)
    {
        if(n==0 || n==1)
            return 1;
        return n*fact(n-1);
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        n=fact(n);
        while(n--)
        {
            next_permutation(nums.begin(),nums.end());
            ans.push_back(nums);

        }
        return ans;
    }
    
};