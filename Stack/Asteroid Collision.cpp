#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        int l=asteroids.size(),i=0;

        while(i<l)
        {
            if(asteroids[i]>0||s.empty()||s.top()<0)
                s.push(asteroids[i++]);
            else if(s.top()>abs(asteroids[i]))
                i++;
            else if(s.top()==abs(asteroids[i])){
                s.pop();
                i++;
            }
            else
                s.pop();  
        }
        vector<int>ans;

        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};