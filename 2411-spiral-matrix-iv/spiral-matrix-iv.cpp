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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
              
         ListNode* temp=head;
         int minr=0,maxr=m-1;
         int minc=0,maxc=n-1;
         while(temp!=NULL)
         {
            for(int j=minc;j<=maxc;j++)
            {
                  if(temp==NULL)
             break;
            ans[minr][j]=temp->val;  
            temp=temp->next;  
            }
             minr++;
             if(temp==NULL)
             break;
            for(int j=minr;j<=maxr;j++){
                  if(temp==NULL)
             break;
                 ans[j][maxc]=temp->val;  
            temp=temp->next;  ;
               
            }
              maxc--;
               if(temp==NULL)
             break;
            for(int j=maxc;j>=minc;j--){
                  if(temp==NULL)
             break;
                ans[maxr][j]=temp->val;  
            temp=temp->next;  ;
                 
            }
            maxr--;
              if(temp==NULL)
             break;
             for(int j=maxr;j>=minr;j--){
                  if(temp==NULL)
             break;
                 ans[j][minc]=temp->val;  
            temp=temp->next;  ;
                
            }
            minc++;
            if(temp==NULL)
             break;
         }
         return ans;
        
    }
};