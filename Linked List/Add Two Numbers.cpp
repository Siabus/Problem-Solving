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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyH=new ListNode(-1);
        ListNode* curr=dummyH;
        ListNode* tmp1=l1;
        ListNode* tmp2=l2;
        int car=0,sum=0;

        while(tmp1!=NULL || tmp2!=NULL)
        {
                sum=car;
                if(tmp1)
                    sum+=tmp1->val;
                if(tmp2)
                    sum+=tmp2->val;
                ListNode* newN=new ListNode(sum%10);
                car=sum/10;

                curr->next=newN;
                curr=curr->next;

                if(tmp1)
                    tmp1=tmp1->next;
                if(tmp2)
                    tmp2=tmp2->next;

        }
        if(car)
        {
            ListNode* nw=new ListNode(car);
            curr->next=nw;
        }
        return dummyH->next;
    }
};