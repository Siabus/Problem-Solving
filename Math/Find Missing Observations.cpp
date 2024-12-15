#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0;
        int m=rolls.size();
        for(int i=0;i<rolls.size();i++)
        {
            sum+=rolls[i];
        }
        long sum2=0;
        sum2=mean*(m+n)-sum;
        if(sum2<n||sum2>n*6)
        return{};
        vector<int>ans(n,1);
        sum2-=n;
        for(int i=0;i<n;i++)
        {
            ans[i]+=min(long(5),sum2);
            sum2-=min(long(5),sum2);
            if(sum2<=0)
            break;
        }
        return ans;
    }
};