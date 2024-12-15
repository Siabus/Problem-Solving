#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int idx,int sum,vector<int>&nums){
        if(idx==nums.size()){
            return sum;
        }
        int n=nums[idx];
        int include=solve(idx+1,sum^n,nums);
        int exclude=solve(idx+1,sum,nums);

        return include+exclude;
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(0,0,nums);
    }
};