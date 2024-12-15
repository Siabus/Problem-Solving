#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<int>&nums,int idx,int k,unordered_map<int,int>&mp)
    {
        if(idx==nums.size()){
            return 1;
        }
        int taken=0;
        if(!mp[nums[idx]-k] && !mp[nums[idx]+k])
        {
            mp[nums[idx]]++;
            taken=solve(nums,idx+1,k,mp);
            mp[nums[idx]]--;
        }
        int nottaken=solve(nums,idx+1,k,mp);
        return taken+nottaken;
    }
   
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        int ans=solve(nums,0,k,mp);
        return ans-1; 
    }
};