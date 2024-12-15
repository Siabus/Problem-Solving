#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int o=0,z=0;
        for(auto i:students){
            if(i==1)
                o++;
            if(i==0)
                z++;
        }
        for(auto i:sandwiches){
            if(i==0)
                z--;
            if(i==1)
                o--;
            if(o<0)
                return z;
            if(z<0)
                return o;
        }
        return 0;
    }
};