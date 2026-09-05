class Solution {
public:
    int numRescueBoats(vector<int>& arr, int target) {
       int n= arr.size();
       int boat=0;
      sort(arr.begin(),arr.end());
     int  i=0;
    int j=n-1;
       while (i <= j) {

            if (arr[i] + arr[j] <= target) {
                i++;
                j--;
            }
            else {
                j--;
            }

            boat++;
        }

        return boat;
    
    }
};