#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
       string str="";
       for(int i=0;i<s.size();i++)
       {
        if(isalnum(s[i]))
        {
            str+=s[i];
        }
       }

       int l=0,r=str.size()-1;
       while(l<=r)
       {
        if(tolower(str[l])!=tolower(str[r]))
        return false;
        l++;
        r--;
       }
           return true; 
    }
};