#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long reverse=0;
        long long tmp=x;
        while(x!=0)
        {
            long long d=x%10;
            reverse=reverse*10+d;
            x/=10;
        }
        return tmp==reverse;
    }
};