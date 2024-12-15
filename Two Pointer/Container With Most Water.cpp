#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int ca=0,mxa=0;

        while(l<r)
        {
            ca=min(height[l],height[r])*(r-l);
            mxa=max(mxa,ca);

            if(height[l]<height[r])
            {
                l++;
                
            }
            else
            {
                r--;
            }
        }
        return mxa;
    }
};