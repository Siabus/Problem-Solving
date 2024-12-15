#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="",ans2="";

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && ans1.empty())
            {
                continue;
            }
            if(!s.empty() && s[i]=='#')
            {
                ans1.pop_back();
            }
            else
            {
                ans1+=s[i];
            }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' && ans2.empty())
            {
                continue;
            }
            if(!t.empty() && t[i]=='#')
            {
                ans2.pop_back();
            }
            else
            {
                ans2+=t[i];
            }
        }
        return ans1==ans2;
    }
};