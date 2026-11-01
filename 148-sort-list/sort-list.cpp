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

 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy= new ListNode(-1);
        ListNode* a= list1;
        ListNode* b=list2;
        ListNode* k=dummy;
        if(list1!=NULL &&list2==NULL) return list1;
           if(list2!=NULL &&list1==NULL) return list2;
        while(a!=NULL && b!=NULL)
        {
            if(a->val<= b->val)
            {
                k->next=a;
                a=a->next;
            }
            else
            {
                k->next=b;
                b=b->next;
            }
             k=k->next;
            
           if(a!=NULL)
            {
                k->next=a;
            }
            if(b!=NULL)
            {
                k->next=b;
            }
            
        }

        return dummy->next;
    }


    ListNode* sortList(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* slow= head;
        ListNode* fast = head;
        while(fast->next!=NULL&& fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
      ListNode* a=slow->next;
      slow->next=NULL;
      head= sortList(head);
      a= sortList(a);
      return mergeTwoLists(head,a);
        
    }
};