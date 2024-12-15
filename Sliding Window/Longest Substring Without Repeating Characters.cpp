#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,n=s.size(),ans=0;

        while(i<n)
        {
            bool vis[256]={false};
            int j=i;

            while(j<n && vis[s[j]]==false)
            {
                ans=max(ans,j-i+1);
                vis[s[j]]=true;
                j++;
            }
            vis[s[i]]=false;
            i++;

        }
        
        return ans;
    }
};