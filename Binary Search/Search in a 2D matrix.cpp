#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0,c=matrix[r].size()-1;//last coloumn of first row
        
        while(r<matrix.size() && c>=0)
        {
            if(matrix[r][c]==target)
            {
                return true;
            }
            if(matrix[r][c]<target)
            {
                r++;
            }
            else
            {
                c--;
            }
        }
        return false;
    }
};