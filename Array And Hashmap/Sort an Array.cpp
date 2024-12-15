/*counting sort*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int &num:nums)
        {
          mp[num]++;
        }
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());

        int i=0;
        for(int num=mn;num<=mx;num++)
        {
          while(mp[num]>0)
          {
            nums[i]=num;
            i++;
            mp[num]--;
          }
        }
        return nums;
    }
};
