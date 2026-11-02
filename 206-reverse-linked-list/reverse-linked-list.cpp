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
};