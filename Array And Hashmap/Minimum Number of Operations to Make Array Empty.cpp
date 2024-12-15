#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>count;
        int ans=0;

        for(auto num :nums)
        {
            count[num]++;
        }
        for (auto [_, c]: count) 
        {
            if(c==1){
                return -1;
            }
            ans+=ceil((double)ans/3);
        }
        return ans;
    }
};