#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arraySign(vector<int>& nums) {
        long int ans=0;
        for(int i=0;i<nums.size();i++)
        {
        if(nums[i]==0)
            return 0;
         if(nums[i]<0)
            ans++;
        }
        if(ans%2==0)
            return 1;
        return -1;
            
    }
};