#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp;
        if(!head)
            return nullptr;

        Node* cur=head;
        while(cur!=NULL)//Clone the list
        {
            mp[cur]=new Node(cur->val);
            cur=cur->next;
        }

        cur=head;
        while(cur!=NULL)//Connect the pointer
        {
            mp[cur]->next=mp[cur->next];
            mp[cur]->random=mp[cur->random];
            cur=cur->next;
        }
        return mp[head];
    }
};