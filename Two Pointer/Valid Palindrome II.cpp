#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool validPalindrome(string s) {
        int l=s.size(),i=0,j=l-1;
        while(i<j)
        {
            if(s[i]!=s[j])
                return ispal(s,i+1,j)||ispal(s,i,j-1);
                i++,j--;
        }
        return true;
    }

bool ispal(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
                i++;
                j--;
        }
        return true;
    }
};