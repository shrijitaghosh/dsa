class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]==target)
                return true;
            }
        }
       return false; 
    }
};