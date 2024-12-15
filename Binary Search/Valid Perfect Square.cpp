#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2){
            return num;
        }

        long long l=1,h=num;
        while(l<=h)
        {
            long long mid=(l+h)/2;
            if(mid*mid==num)
                return mid;
            else if(mid*mid<num)
                l=mid+1;
            else
                h=mid-1;
        }
        if(h*h==num)
            return true;
        else
            return false;
    }
};