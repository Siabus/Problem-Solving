#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        vector<int>tmp;
        vector<int>res;
        if(nums.size()==0)
        {
            return;
        }
        k=k%len;
        for(int i=len-k;i<len;i++)
        {
            tmp.push_back(nums[i]);
        }
        for(int i=0;i<k;i++)
        {
            res.push_back(tmp[i]);
        }
         for(int i=0;i<len-k;i++)
        {
            res.push_back(nums[i]);
        }
        for(int i=0;i<len;i++)
        {
            nums[i]=res[i];
        }

    }
};