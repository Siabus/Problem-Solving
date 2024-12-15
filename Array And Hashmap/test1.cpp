#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        long int n=arr.size(),mx=arr[n-1];
        arr[n-1]=-1;
        for(int i=n-2;i>=0;i--)
        {
            int tp=mx;
            if(mx<arr[i])
            mx=arr[i];

            arr[i]=tp;
        }
        return arr;
    }
    
};