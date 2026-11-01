/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
   ListNode *t1=headA;
   ListNode *t2=headB;
   int len1=0;
   int len2=0;
   while(t1!=NULL)
   {
    t1=t1->next;
    len1++;
   }
   while(t2!=NULL)
   {
    t2=t2->next;
    len2++;
   }
   
   t1=headA;
   t2=headB;
   if(len1>len2)
   { for(int i=1;i<=len1-len2;i++)
   {
    t1=t1->next;
   }

   }
   else{
     for(int i=1;i<=len2-len1;i++)
   {
    t2=t2->next;
   }


   }
   while(t1!=t2)
   {
     t1=t1->next;
      t2=t2->next;
   }
    return t1;
    }
};