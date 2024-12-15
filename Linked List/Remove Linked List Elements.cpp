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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val)
        {
            head=head->next;
        }
        ListNode* cnode=head;

        while(cnode!=NULL && cnode->next!=NULL)
        {
            if(cnode->next->val==val)
            {
                cnode->next=cnode->next->next;
            }
            else
            {
                cnode=cnode->next;
            }
        }
        return head;
    }
};