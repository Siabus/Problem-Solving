#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int>s={0,0,0,0};
        bool dfs(vector<int>&arr,int i,int n,int tar){
            if(i>=n){
                return true;
            }
            for(int j=0;j<4;j++){
                if(s[j]+arr[i]<=tar){
                    s[j]+=arr[i];

                    if(dfs(arr,i+1,n,tar)){
                        return true;
                    }
                    s[j]-=arr[i];
                }
            }
            return false;
        }
bool makesquare(vector<int>& matchsticks) {
        int n=matchsticks.size(),sum=0;
        for(int i=0;i<n;i++){
            sum+=matchsticks[i];
        }
        if(sum%4!=0){
            return false;
        }
        int t=sum/4;
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        return dfs(matchsticks,0,n,t);
    }
};