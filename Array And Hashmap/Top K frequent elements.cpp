#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>q;

        for(auto it:mp)
        {
            q.push({it.second,it.first});
        }
        while(k--)
        {
            res.push_back(q.top().second);
            q.pop();
        }
       return res;
    }
};