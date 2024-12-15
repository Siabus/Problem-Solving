#include<bits/stdc++.h>
using namespace std;
struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
   };
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return;

        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=slow->next;
        ListNode* prev=NULL;
        slow->next=NULL;

        while(second)
        {
            ListNode* tmp=second->next;
            second->next=prev;
            prev=second;
            second=tmp;
        }
        ListNode* first=head;
        second=prev;
        while(second)
        {
            ListNode* tmp1=first->next;
            ListNode* tmp2=second->next;
            first->next=second;
            second->next=tmp1;
            first=tmp1;
            second=tmp2;
        }
    }
};