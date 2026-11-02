/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
ListNode* d1=new ListNode(-1);//<3 vals are added 
ListNode* d2=new ListNode(-1);//>= 3 vals are added into it
ListNode* t=head;
ListNode* temp1=d1;
ListNode* temp2=d2;
while(t!=NULL)
{
    if(t->val<x)
    {
 temp1->next=t;
 temp1=t;
 
    }
    else{
 temp2->next=t;
 temp2=t;
 
    }
    t=t->next;
}
temp1->next=NULL;
temp2->next=NULL;
temp1->next=d2->next;
return d1->next;
    }
};