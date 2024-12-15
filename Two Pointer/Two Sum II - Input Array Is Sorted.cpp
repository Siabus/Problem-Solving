#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=0,n=0;
        n=numbers.size();
        r=n-1;

        while(l<r)
        {
            int sum=0;
            sum=numbers[l]+numbers[r];
            if(sum==target)
            {
                return {l+1,r+1};
            }
            else if(sum<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return{-1,-1};
    }
};