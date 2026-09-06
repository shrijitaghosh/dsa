class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;

        for(int i = 0; i < matrix.size(); i++) {

            int mini = *min_element(matrix[i].begin(), matrix[i].end());

         
            int col = min_element(matrix[i].begin(), matrix[i].end()) - matrix[i].begin();

            bool lucky = true;

            for(int j = 0; j < matrix.size(); j++) {
                if(matrix[j][col] > mini) {
                    lucky = false;
                    break;
                }
            }

            if(lucky)
                ans.push_back(mini);
        }

        return ans;
    }
};