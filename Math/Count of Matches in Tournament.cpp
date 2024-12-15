#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfMatches(int n) {
        int total=0,matches;
        while(n!=1)
        {
            if(n%2==0)
            {
                matches=n/2;
                n/=2;
            }
            else{
                matches=(n-1)/2;
                n=matches+1;
            }
            total=total+matches;
        }
        return total;
    }
};