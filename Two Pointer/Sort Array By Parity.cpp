#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd,even,add;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<even.size();i++)
        {
            add.push_back(even[i]);
        }
        for(int i=0;i<odd.size();i++)
        {
            add.push_back(odd[i]);
        }
    return add;
    }
};