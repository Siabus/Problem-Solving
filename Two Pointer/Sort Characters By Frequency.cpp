#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;

        for(auto nums: s)
        {
            mp[nums]++;
        }
        vector<pair<int,char>>freq;
        for(auto& i:mp)
        {
            freq.push_back(make_pair(i.second,i.first));
        }
        sort(freq.begin(),freq.end(),greater<pair<int,char>>());
        string ans="";

        for(auto& i:freq)
        {
            ans+=string(i.first,i.second);
        }

        return ans;
    }
};