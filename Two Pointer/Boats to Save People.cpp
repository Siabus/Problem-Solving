#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0,i=0,j=people.size()-1;
        
        while(i<=j)
        {
            if((people[i]+people[j])<=limit){
                i++;
            }
            
                j--;
                ans++;
        }

        return ans;
    }
};