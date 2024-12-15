#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int z=0,o=0,ans=0;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
               if(nums[j]==0)
                    z++;
                else
                    o++; 
            if(z==o)
            {
                ans=max(ans,j-i+1);
            }
        }
        }
        return ans;
    }
};