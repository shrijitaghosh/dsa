#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string triangleType(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        
       
        if (arr[0] + arr[1] <= arr[2]) {
            return "none";
        }
        
        
        if (arr[0] == arr[1] && arr[1] == arr[2]) {
            return "equilateral";
        }
        
        
        if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
            return "isosceles";
        }
        
        
        return "scalene";
    }
};
