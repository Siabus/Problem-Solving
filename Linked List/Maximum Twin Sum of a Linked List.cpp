#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){};
};
class Solution{
public:
    int Pairsum(ListNode* head){
        ListNode* fast=head;
        ListNode* slow=head;
        int mx=0;

        while (fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode *nextnode,*prev=NULL;
        while(slow!=NULL)
        {
            nextnode=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nextnode;
        }
        while(prev!=NULL)
        {
            mx=max(mx,head->val+prev->val);
            prev=prev->next;
            head=head->next;
        }
        return mx;
    }
};