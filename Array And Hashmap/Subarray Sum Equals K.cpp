#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int psum=0,rem=0,cnt=0;
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            psum+=nums[i];
            rem=psum-k;
            cnt+=mp[rem];
            mp[psum]+=1;

        }
        return cnt;
    }
};