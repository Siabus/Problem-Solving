#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(m+n);
        int p=0,p1=0,p2=0;

        while(p1<m && p2<n)
        {
            if(nums1[p1]<=nums2[p2])
                ans[p++]=nums1[p1++];
            else
                ans[p++]=nums2[p2++];
        }
        while(p1<m)
        {
            ans[p++]=nums1[p1++];
        }

        while(p2<n)
        {
            ans[p++]=nums2[p2++];
        }
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=ans[i];
        }
    }
};