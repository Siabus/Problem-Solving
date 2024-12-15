#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1=0,p2=0,i=0,j=0;
        p1=word1.size(),p2=word2.size();
        string ans="";
        
        while(i<p1||j<p2)
        {
            if(i<p1)
            {
                ans+=word1[i++];
            }
            if(j<p2)
            {
                ans+=word2[j++];
            }
        }

        return ans;
    }
};