#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
        return false;

        map<char,char>mp;
        set<char,char>st;

        for(int i=0;i<s.size();i++)
        {
            char c1=s[i],c2=t[i];
            if(mp.find(c1)!=mp.end())
            {
                if(mp[c1]!=c2)
                return false;
            }
            else
            {
                if(st.find(c2)!=st.end())
                {
                    return false;
                }
                mp[c1]=c2;
                st.insert(c2);
            }
        }
        return true;
    }
};