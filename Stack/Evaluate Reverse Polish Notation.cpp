#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>s;
      /* for(string const& c:tokens)
       {
        if(c=="+")
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(a+b);
        }
        if(c=="-")
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(b-a);
        }
        if(c=="*")
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(b*a);
        }
        if(c=="/")
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(static_cast<int>(static_cast<double>(b)/a));
        }else{
            s.push(stoi(c));
        }
       } 
       return s.top();*/
       for(int i=0;i<tokens.size();i++)
       {
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/" )
            {
                s.push(stoi(tokens[i]));
                continue;
            }
            else
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                if(tokens[i]=="+")
                {
                    s.push(a+b);
                }
                if(tokens[i]=="-")
                {
                    s.push(b-a);
                }
                if(tokens[i]=="*")
                {
                    s.push(a*b);
                }
                if(tokens[i]=="/")
                {
                    s.push(static_cast<int>(static_cast<double>(b)/a));
                }
            }
       }
       return s.top();
    }
};
