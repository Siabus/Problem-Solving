#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        vector<vector<int>>res(row-2,vector<int>(row-2));
        for(int i=0;i<row-2;++i)
        {
            for(int j=0;j<col-2;++j)
            {
                int mx=grid[i][j];
                for(int k=0;k<3;++k)
                {
                    for(int l=0;l<3;++l)
                    {
                        mx=max(mx,grid[i+k][j+l]);
                    }
                }
                res[i][j]=mx;
            }
        }
        return res;
    }
};