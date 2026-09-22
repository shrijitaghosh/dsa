class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        int n=arr.size();
        int i=0;
        for(i=0;i<n;i++)
        { 
            if( arr[i]%2!=0) {
            count++;
          if (count == 3) {
                    return true;
                }
            } else {
                count = 0; 
            }
        }
        
        return false;
       
 
    }
};