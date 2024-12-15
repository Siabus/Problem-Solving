#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalMoney(int n) {
        int tw=n/7;
        int rem=n%7;

        int res=0;
        int tl=max(0,tw-1);
        res=tw*(7*(7+1))/2+7*(((tl)*(tl+1))/2);

        res+=rem*(rem+1)/2+tw*rem;

        return res;
    }
};