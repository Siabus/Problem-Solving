#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1=-1,ans2=-1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans1=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                ans2=i;
                break;
            }
        }
        return {ans1,ans2};
    }
};