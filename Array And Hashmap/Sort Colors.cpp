#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int tmp=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]>nums[j]){
        //         tmp=nums[i];
        //         nums[i]=nums[j];
        //         nums[j]=tmp;
        //         }

        //     }
        // }
        // return;
        /********** ********************************************************************/
        //Dutch Natinal flag Algorithm

       int l=0,h=nums.size()-1,mid=0;
       while(mid<=h)
       {
        switch(nums[mid])
        {
            case 0:
                swap(nums[l++],nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid],nums[h--]);
                break;
        }
       }
        return ;
    }
};