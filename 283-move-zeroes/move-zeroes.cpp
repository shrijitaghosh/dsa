class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        
        for(int j=0;j<n-1;j++)
        {
            for(int i=0;i<n-1;i++)
            { if(arr[i]==0){
                swap(arr[i],arr[i+1]);
                }
               
            }
        }
        
    }
};