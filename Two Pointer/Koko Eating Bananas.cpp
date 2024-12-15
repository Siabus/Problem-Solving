#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=INT_MAX;
        int res=r;

        while(l<=r)
        {
            int mid=l+(r-l)/2;
            int hr=0;
            for(int i=0;i<piles.size();i++)
            {
                hr+=ceil(i/mid);
            }
            if(hr<=h)
            {
                res=min(res,mid);
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
    return res;
    }
};