class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
            vector<vector<int>> result(n, vector<int>(m, 0));

        for(int i=0;i<m;i++)//shrijita
        {
            for(int j=0;j<n;j++)
          result[j][i]=matrix[i][j];
        }
        return result;
       
    }
};