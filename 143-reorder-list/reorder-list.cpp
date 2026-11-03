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
   ListNode* reverseList(ListNode* head) {
       //using recursion 

if(head==NULL or head->next==NULL) return head;
 ListNode* a=head->next;
  ListNode* newhead=reverseList(a);
  a->next=head;
  head->next=NULL;
  return newhead;     
    }
    void reorderList(ListNode* head) {
       
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next!=NULL && fast->next->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
          ListNode* a=head;
            ListNode* b=slow->next;
            slow->next=NULL;
            b= reverseList(b);
             ListNode* dummy =new ListNode(-1);
              ListNode* temp= dummy;
               ListNode* t1= a;
                ListNode* t2=b;
                 
                while(t1!=NULL )
                {
            temp->next=t1;
            temp=temp->next;
            t1=t1->next;

            temp->next=t2;
     temp=temp->next;
          if(t2!=NULL)  t2=t2->next;
                }
     
     head= dummy->next;
        
    }
};