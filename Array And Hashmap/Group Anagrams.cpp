#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        string s;

        for(int i=0;i<strs.size();i++)
        {
            s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);

        }   
        vector<vector<string>>ans(mp.size());
        int idx=0;
        for(auto i:mp)
        {
            auto tmp=i.second;

            for(auto i:tmp)
            {
                ans[idx].push_back(i);
            }
            idx++;
        }
        return ans;
    }
};