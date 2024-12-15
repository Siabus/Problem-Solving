#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSwaps(string s) {
        int l=s.size(),c=0,ans=0;

        for(int i=0;i<l;i++)
        {
            if(s[i]=='[')
                c--;
            else
                c++;
            ans=max(ans,c);
        }
        return (ans+1)/2;

    }
};