#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(int i,int n,int k,vector<int>v,vector<vector<int>>&ans)
    {
        if(v.size()==k)
            ans.push_back(v);

        for(int j=i;j<=n;j++)
        {
            v.push_back(j);
            solve(j+1,n,k,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        vector<vector<int>>ans;
        int i=1;
        solve(i,n,k,v,ans);
        return ans;

    }
};