#include<bits/stdc++.h>
using namespace std;

struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
   };
/// Use vector
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>s;
        ListNode* ptr=head;

        //LL to stack
        while(ptr!=NULL)
        {
            s.push_back(ptr->val);
            ptr=ptr->next;
        }
        sort(s.begin(),s.end());
        ptr=head;
        int k=0;

        //stack to  ll
        while(ptr!=NULL)
        {
            ptr->val=s[k++];
            ptr=ptr->next;
        }
        return head;
    }
};