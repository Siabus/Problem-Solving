#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>res;
    void solve(int i,vector<int>nums,vector<int>&tmp)
    {
        if(i>=nums.size()){
            res.push_back(tmp);
            return;
        }
        tmp.push_back(nums[i]);
        solve(i+1,nums,tmp);
        tmp.pop_back();
        solve(i+1,nums,tmp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>tmp;
        solve(0,nums,tmp);
        return res;
    }
};