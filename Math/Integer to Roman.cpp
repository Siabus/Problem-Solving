#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        map<int,string>m;
        m[1]="I";
        m[4]="IV";
        m[5]="V";
        m[9]="IX";
        m[10]="X";
        m[40]="XL";
        m[50]="L";
        m[90]="XC";
        m[100]="C";
        m[400]="CD";
        m[500]="D";
        m[900]="CM";
        m[1000]="M";

        string ans="";

        //reverse(m.begin(),m.end());
        for(auto i=m.rbegin();i!=m.rend();++i)
        {
            int a=i->first;
            string b=i->second;
            while(num>=a)
            {
                ans+=b;
                num-=a;
            }
        }
        return ans;
    }
};
