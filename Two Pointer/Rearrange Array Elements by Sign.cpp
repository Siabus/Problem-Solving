#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                neg.push_back(nums[i]);
            }
            else
            {
                pos.push_back(nums[i]);
            }
        }
        vector<int> rearranged;
      
        int i = 0, j = 0;
        while(i < pos.size() || j < neg.size()) {
            if(i < pos.size()) {
                rearranged.push_back(pos[i++]);
            }
            if(j < neg.size()) {
                rearranged.push_back(neg[j++]);
            }
        }
        
        return rearranged;
    }
};
 