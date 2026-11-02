
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
ListNode* current=head;
ListNode* prev=NULL;
if(head==NULL or head->next==NULL) return head;
while(current!=NULL)
{
    ListNode* fwd=current->next;
    current->next=prev;
    prev=current;
    current=fwd;

}
   return prev;     
    }
};