#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        long long int l=0,h=n-1,ans=0;
            if(n==1)
                return 1;
        while(l<=h)
        {
            long long int mid=l+(h-l)/2;
            long long int res=mid*(mid+1)/2;

            if(res==n)
                return mid;
            else if(res>n)
                h=mid-1;
            else
                l=mid+1;
        }

        return h;
    }
};