#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        return log(n)/log(4)==int(log(n)/log(4));
    }
};