#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int ans=0,tmp=0;
        int l=0,r=tokens.size()-1;
        while(l<=r)
        {
            if(tokens[l]<=power)
            {
                power-=tokens[l++];
                tmp++;
                ans=max(ans,tmp);
            }
            else if(tmp>0)
            {
                power+=tokens[r--];
                tmp--;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};