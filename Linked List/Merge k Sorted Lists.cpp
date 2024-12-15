#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){};
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ar;
        for(auto it:lists)
        {
            ListNode* tmp=it;
            while(tmp!=NULL)
            {
                ar.push_back(tmp->val);
                tmp=tmp->next;
            }
        }
        sort(ar.begin(),ar.end());
        ListNode* ans=new ListNode(0);
        ListNode* tmp1=ans;

        for(int i=0;i<ar.size();i++)
        {
            ListNode* tmp2=new ListNode(ar[i]);
            tmp1->next=tmp2;
            tmp1=tmp1->next;

       }
       return ans->next;
    }
};