#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sd=0,td=0;
        while(sd<s.size() && td<t.size())
        {
            if(s[sd]==t[td])
            {
                sd++;
            }
            td++;
        }
        return sd==s.size();

    }  
};