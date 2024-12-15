#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
   int l=0,r=s.size()-1;
   while(l<r)
   {
    if(s[l]!=s[r]){
    return false;
    }
    l++;
    r--;
   }
   return true;
}
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        //string ans="";
        for(const string &word :words)
        {
            if(palindrome(word))
            return word;
        }
        return "";
    }
        
};