#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        string ans,tmp;
        stack<string>st;
        stringstream ss(path);

        while(getline(ss,tmp,'/'))
        {
            if(tmp==""||tmp==".")
            {
                continue;
            }
            
            if(tmp!="..")
            {
                st.push(tmp);
            }
            else if(!st.empty())
            {
                st.pop();
            }
        }
        if(st.empty())
        {
            return "/";
        }
        while(!st.empty())
        {
            ans="/"+st.top()+ans;
            st.pop();
        }
        return ans;
    }
};