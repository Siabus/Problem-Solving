#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size());
        for(int i=0;i<temperatures.size();i++)
        {
            for(int j=i+1;j<temperatures.size() && !ans[i]; j++)
            {
                if(temperatures[j]>temperatures[i])
                {
                    ans[i]=j-i;
                }
            }
        }
        return ans;
    }
};