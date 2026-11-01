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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL) return head;
         ListNode* temp= head;
         int n=0;
         while(temp!=NULL)
         {
            temp=temp->next;
            n++;
         }
           k=k%n;
         if(k==0) return head;
       
      ListNode* temp1= head;
 
         ListNode* a= NULL;
         ListNode* b= NULL;
         ListNode* c= NULL;
         for(int i=1;i<=n;i++)
         {

           if(i==n-k) a=temp1;
           if(i==n-k+1) b=temp1;
           if(i==n) c=temp1;
           temp1=temp1->next;
         }
a->next=NULL;
c->next=head;
return b;       

    }
};