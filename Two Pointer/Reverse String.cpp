#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int len=0;
        len=s.size();
        int l=0,r=len-1;

        while(l<=r)
        {
            swap(s[l],s[r]);
            l++;
            r--;
        }

        return;
    }
};