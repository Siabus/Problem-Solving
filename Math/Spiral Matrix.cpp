#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int l=0,r=n-1,u=0,d=m-1,cnt=0;
        vector<int>ans(m*n);

        while(l<=r && u<=d)
        {
            if(l<=r && u<=d)
            {
                for(int i=l;i<=r;i++)
                {
                    ans[cnt++]=matrix[u][i];
                }
                u++;
            }
            if(l<=r && u<=d)
            {
                for(int i=u;i<=d;i++)
                {
                    ans[cnt++]=matrix[i][r];
                }
                r--;
            }
            if(l<=r && u<=d)
            {
                for(int i=r;i>=l;i--)
                {
                    ans[cnt++]=matrix[d][i];
                }
                d--;
            }
            if(l<=r && u<=d)
            {
                for(int i=d;i>=u;i--)
                {
                    ans[cnt++]=matrix[i][l];
                }
                l++;
            }
        }
        return ans;
    }
};