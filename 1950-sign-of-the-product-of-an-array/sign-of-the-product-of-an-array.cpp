class Solution {
public:
    int arraySign(vector<int>& arr) {
     int negCount = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                return 0;
            }
            if (arr[i] < 0) {
                negCount++;
            }
        }
        
       
        if (negCount % 2 != 0) {
            return -1;
        } else {
            return 1;
        }
    }
};