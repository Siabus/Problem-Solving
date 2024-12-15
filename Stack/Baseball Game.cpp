#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        int ans=0;

        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C")
                s.pop();
            else if(operations[i]=="D")
                s.push(2*s.top());
            else if(operations[i]=="+")
                {
                    int tmp1=s.top();
                    s.pop();
                    int tmp2=s.top();
                    s.push(tmp1);
                    s.push(tmp1+tmp2);
                }
            else{
                s.push(stoi(operations[i]));
            }
        }
        int res=0;
        while(!s.empty())
        {
            res+=s.top();
            s.pop();
        }

        return res;
    }
};
