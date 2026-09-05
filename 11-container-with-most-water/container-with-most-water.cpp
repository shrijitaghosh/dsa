class Solution {
public:
    int maxArea(vector<int>& a) {
       
              int n=a.size();
             
              int i=0,j=n-1;
              int area;
              int area2=0;
              
             while(i<j)
             { 
                 area =min(a[i],a[j])*(j-i);
                 area2=max(area2,area);
                if(a[i]<a[j]) i++;
                else {
                    j--;
                }
               }

    
             return area2;
        
    }
};