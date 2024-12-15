#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nextnum(int n)
    {
        int newn=0;
        while(n!=0)
        {
            int digit=n%10;
            n/=10;
            newn+=digit*digit;
        }
        return newn;
    }
    bool isHappy(int n) {//floyd's cycle detection
        if(n==1)
            return true;
        int slow=n,fast=nextnum(n);
        while(fast!=slow)
        {
            if(slow==1||fast==1)
            {
                return true;
            }

            slow=nextnum(slow);
            fast=nextnum(nextnum(fast));
        }
        return false;
    }
};