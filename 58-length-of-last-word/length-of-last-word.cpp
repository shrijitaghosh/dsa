class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.length() - 1;
    
    while (j >= 0 && s[j] == ' ') {
        j--;
    }
    
    
    int len = 0;
    while (j >= 0 && s[j] != ' ') {
        len++;
        j--;
    }
    
    return len;
        
    }
};