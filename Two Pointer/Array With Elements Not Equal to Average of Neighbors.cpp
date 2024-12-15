#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l=nums.size();
        for(int i=1;i<l-1;i++)
        {
            if(nums[i-1]<nums[i] && nums[i]<nums[i+1] || nums[i-1]>nums[i] && nums[i]>nums[i+1])
            {
                swap(nums[i],nums[i+1]);
            }
        }
        return nums;
    }
};