class Solution {
public:
 std::string truncateSentence(std::string s, int k) {
        int space_count = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ' ') {
                space_count++;
                if (space_count == k) {
                    return s.substr(0, i);
                }
            }
        }
        return s; // If k is greater than or equal to the number of words
    }
};