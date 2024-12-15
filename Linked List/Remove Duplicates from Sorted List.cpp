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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp=head;
        while(tmp!=NULL && tmp->next!=NULL)
        {
            if(tmp->val==tmp->next->val)
            {
                tmp->next=tmp->next->next;
            }
            else
            {
                tmp=tmp->next;
            }

        }
        return head;

    }
};