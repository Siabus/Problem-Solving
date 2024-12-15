#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int len=0;
        len=text.size();
        int b=0,a=0,l=0,o=0,n=0;
        for(int i=0;i<len;i++)
        {
            if(text[i]=='b')
                b++;
            else if(text[i]=='a')
                a++;
            else if(text[i]=='l')
                l++;
            else if(text[i]=='o')
                o++;
            else if(text[i]=='n')
                n++;
        }
        l/=2;
        o/=2;
        return min({b,a,l,o,n});
    }
};
