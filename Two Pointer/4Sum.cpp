#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        for (int i = 0; i < len - 3; i++)
         {
            for (int j = i + 1; j < len - 2; j++)
             {
                long long nt = (long long)target - (long long)nums[i] - (long long)nums[j];
                int l = j + 1, h = len - 1;
                while (l < h)
                {
                    if (nums[l] + nums[h] < nt) 
                    {
                        l++;
                    } 
                    else if (nums[l] + nums[h] > nt) 
                    {
                        h--;
                    } 
                    else 
                    {
                        s.insert({nums[i], nums[j], nums[l], nums[h]});
                        l++;
                        h--;
                    }
                }
            }
        }
        for (auto i : s) {
            ans.push_back(i);
        }
        return ans;
    }
};
