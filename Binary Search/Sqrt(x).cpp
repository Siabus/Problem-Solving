#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }

        long long l=1,h=x;
        while(l<=h)
        {
            long long mid=(l+h)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x)
                l=mid+1;
            else
                h=mid-1;
        }
        return h;
    }
};