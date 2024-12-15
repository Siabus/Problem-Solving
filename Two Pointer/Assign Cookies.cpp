#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        for(int i=0;i<s.size();i++)
        {
            if(ans<g.size() && g[ans]<=s[i])
            {
                ans++;
            }
        }
        return ans;
    }
};