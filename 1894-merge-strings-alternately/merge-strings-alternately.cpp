class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string result = "";
        int i = 0, j = 0;
        
        // Alternate characters while both strings have characters left
        while (i < word1.length() && j < word2.length()) {
            result += word1[i++];
            result += word2[j++];
        }
        
        // Append any remaining characters from the longer string
        if (i < word1.length()) {
            result += word1.substr(i);
        }
        if (j < word2.length()) {
            result += word2.substr(j);
        }
        
        return result;
    }
};
