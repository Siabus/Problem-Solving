#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,rs=0,ls=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        rs=sum;
        for(int i=0;i<nums.size();i++)
        {
            rs-=nums[i];
            if(rs==ls){
            return i;
            }
            ls+=nums[i];
        }
        return -1;
    }
};