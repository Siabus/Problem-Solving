#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end());
        vector<int>ans1,ans2;
        for(auto num1 : set1)
        {
            if(set2.count(num1)==0)
            {
                ans2.push_back(num1);
            }
        }
        for(auto num2 : set2)
        {
            if(set1.count(num2)==0)
            {
                ans1.push_back(num2);
            }
        }
        return {ans2,ans1};
    }
};