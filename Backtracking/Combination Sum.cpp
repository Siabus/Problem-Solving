#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void sum(int i,int target,vector<int>&a,vector<int>&comb,vector<vector<int>>&ans,int n)
{
    if(i==n)
    {
        return;
    }
    if(target==0)
    {
        ans.push_back(comb);
        return;
    }
    if(a[i]<=target)
    {
        comb.push_back(a[i]);
        sum(i,target-a[i],a,comb,ans,n);
        comb.pop_back();
    }
    sum(i+1,target,a,comb,ans,n);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>comb;
        int n=candidates.size();
        sum(0,target,candidates,comb,ans,n);
        return ans;
    }
};