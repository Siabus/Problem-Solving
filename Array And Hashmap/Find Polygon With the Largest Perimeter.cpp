#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long ans=-1,sum=0;

        for(int i=0;i<nums.size();i++)
        {
            if(i>=2 && nums[i]<sum)
                ans=sum+nums[i];
             sum+=nums[i];

        }

        return ans;;
    }
};