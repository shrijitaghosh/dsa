class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
       for (int i = 0; i < strs[0].length(); i++) {
        char ch = strs[0][i];

        // Check if this character matches at index 'i' in all other strings
        for (int j = 1; j < strs.size(); j++) {
            // Stop if the current string is shorter than 'i' OR characters mismatch
            if (i >= strs[j].length() || strs[j][i] != ch) {
                return strs[0].substr(0, i);
            }
        }
    }

    return strs[0];
    
        
    }
};