#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        while(columnNumber)
        {
            char c='A'+(columnNumber-1)%26;//for the last character
            res=c+res;
            columnNumber=(columnNumber-1)/26;//for 2nd last ,3rd last and so on
        }
        return res;
    }
};