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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp1=head;
        ListNode* temp2=dummy;
 while(temp1 !=NULL)
 {
    ListNode* x=temp1->next;
    if(x!=NULL&& temp1->val==x->val)
    {
        while(x!=NULL && x->val==temp1->val) x=x->next;
        temp1=x;
    }
    else
    {
        temp2->next=temp1;
        temp2=temp1;
        temp1=temp1->next;
    }
 }
 temp2->next=NULL;
 return dummy->next;
    }
};