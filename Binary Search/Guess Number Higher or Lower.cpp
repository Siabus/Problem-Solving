#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int guessNumber(int n) {
        int ans=-1;
        int l=0,h=n;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            int g=guess(mid);

            if(g==-1){
                h=mid-1;;
            }
            else if(g==1)
            {
                l=mid+1;
            }
            else if(g==0){
                ans=mid;
                break;
            }
        }
        return ans;
    }
};