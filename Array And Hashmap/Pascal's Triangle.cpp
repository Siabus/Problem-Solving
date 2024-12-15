#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> res;
      vector<int>pr;

      for(int i=0;i<numRows;i++)  
      {
        vector<int>cr(i+1,1);
        for(int j=1;j<i;j++)
        {
            cr[j]=pr[j-1]+pr[j];
        }
        res.push_back(cr);
        pr=cr;
      }
      return res;
        

    }
};