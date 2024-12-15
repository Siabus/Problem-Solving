#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int len=colors.size(),ans=0;
        vector<int>tmp;
        for(int i=1;i<len;i++)
        {
            if(colors[i]==colors[i-1])
            {
                ans+=min(neededTime[i],neededTime[i-1]);
                neededTime[i]=max(neededTime[i-1],neededTime[i]);
            }
        }
        

        return ans;
    }
};