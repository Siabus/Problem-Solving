#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int>s;
    int n=nums.size();
    int ans=1;

    if(n==0)
        return 0;

    for(int i=0;i<nums.size();i++)
    {
        s.insert(nums[i]);
    }

    for(auto it:s)
    {
        if(s.find(it-1)==s.end())
        {
            int cnt=1;
            int x=it;
            while(s.find(x+1)!=s.end())
            {
                x++;
                cnt++;
            }
            ans=max(ans,cnt);
        }
    }
    return ans;
    }
};