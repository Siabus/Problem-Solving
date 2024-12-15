#include<bits/stdc++.h>
using namespace std;

bool comp(string a,string b)
{
    return a+b>b+a;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(int i:nums)
        {
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end(),comp);

        string res;

        for(int i=0;i<s.size();i++)
        {
            res+=s[i];
        }
        if(res[0]=='0')
            return "0";
        return res;
    }
};