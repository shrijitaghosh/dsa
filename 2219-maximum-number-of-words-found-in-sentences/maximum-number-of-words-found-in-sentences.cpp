class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        int max_words = 0;
        
        for (const std::string& s : sentences) {
           
            int spaces = std::count(s.begin(), s.end(), ' ');
            
           
            int words = spaces + 1;
            
           
            max_words = std::max(max_words, words);
        }
        
        return max_words;
    }
};