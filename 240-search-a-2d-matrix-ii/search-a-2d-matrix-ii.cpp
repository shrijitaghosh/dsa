class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int tar) {
        int m=arr.size();
        int n=arr[0].size();
        int j=n-1;
        int i=0;
        while(i<m &&j>=0)
        {
            if(arr[i][j]>tar)
            {
                j--;
            }
            else if(arr[i][j]<tar) i++;
            else return true;
        }
    return false;     
    }
};