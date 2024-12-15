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
    ListNode* swapNodes(ListNode* head, int k) {
        ///Two Pointer approach
        ListNode* cur=head;
        for(int i=0;i<k-1;i++)
        {
            cur=cur->next;//take a pointer to kth node
        }
        ListNode* left=cur;//left=kth node from beginning
        ListNode* right=head;

        while(cur->next!=NULL)
        {
            cur=cur->next;//left=kth node from end
            right=right->next;//right=kth node from beginning
        }
        swap(left->val,right->val);
        return head;
    }
};