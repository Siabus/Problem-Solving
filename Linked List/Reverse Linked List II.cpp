#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
    ListNode *next;
    int val;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0);
        ListNode* prev=dummy;
        dummy->next=head;

        for(int i=0;i<left-1;i++)
        {
            prev=prev->next;//node before left
        }
        ListNode* cur=prev->next; //left node

        for(int i=0;i<right-left;i++)
        {
            ListNode* tmp=cur->next;
            cur->next=tmp->next;
            tmp->next=prev->next;
            prev->next=tmp;
        }
        return dummy->next;

    }
};