
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
          ListNode* slow=head;
        ListNode* fast=head;
           while(fast!=NULL&& fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if (slow == fast) break;
            }
            if(fast==NULL or fast->next==NULL) return NULL;
             ListNode* temp=head;
             while(temp!= slow)
             {
                slow=slow->next;
                temp=temp->next;

             } 
             return slow;
        }
       
        
    
};