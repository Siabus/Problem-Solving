#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int l=0,n=0;
        n=nums.size();
        l=floor(n/3);
        unordered_map<int,int>mp;
        for(auto num:nums)//count no of occurance of each element in an array
        {
            mp[num]++;
        }
        vector<int>ans;
        for(auto& pair:mp)
        {
            if(pair.second>l)
            {
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};