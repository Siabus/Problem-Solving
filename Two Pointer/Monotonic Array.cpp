#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool f1=true;
        bool f2=true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1]){
                f1=false;
            }
            else if(nums[i]>nums[i+1]){
                f2=false;
            }
            
        }
        return f1||f2;
    }
};