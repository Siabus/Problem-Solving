#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bestClosingTime(string customers) {
        int y=0,ans=-1,cnt=0;

        for(int i=0;i<customers.size();i++)
        {
            if(customers[i]=='Y'){
                y++;
            }
            else{
                y--;
            }
        if(y>cnt){
        cnt=y;
        ans=i;
        }
        }

        return ans+1;
    }
};