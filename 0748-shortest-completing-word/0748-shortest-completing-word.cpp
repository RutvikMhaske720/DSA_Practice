class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
              vector<int> targetCount(26, 0);
        for (char c : licensePlate) {
            if (isalpha(c)) {
                targetCount[tolower(c) - 'a']++;
            }
        }
        
        string shortestWord = "";
        
        for (const string& word : words) {
                       vector<int> wordCount(26, 0);
            for (char c : word) {
                wordCount[c - 'a']++;
            }
           
            bool isValid = true;
            for (int i = 0; i < 26; i++) {
                if (wordCount[i] < targetCount[i]) {
                    isValid = false;
                    break;
                }
            }
            
           
            if (isValid) {
                if (shortestWord.empty() || word.length() < shortestWord.length()) {
                    shortestWord = word;
                }
            }
        }
        
        return shortestWord;
    }
};