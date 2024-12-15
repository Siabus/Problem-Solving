#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp=prices[0],mxp=0,cp=0;

        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<bp)
            {
                bp=prices[i];
            }
            else
            {
                cp=prices[i]-bp;
                mxp=max(mxp,cp);
            }
        }
     
       return mxp;
    }
};