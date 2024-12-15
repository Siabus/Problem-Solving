#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        int n=0,m=0,mul=0,sum=0;
        n=num1.size();
        m=num2.size();
        vector<int>ans(n+m,0);

        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                mul=(num1[i]-'0')*(num2[j]-'0');
                sum=mul+ans[i+j+1];

                ans[i+j+1]=sum%10;
                ans[i+j]+=sum/10;
            }
        }
        string res;
        for(auto i:ans)
        {
            if(!(res.empty() && i==0))
            {
                res.push_back(i+'0');
            }
        }
        return res.empty()?"0":res;

    }
};