#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <cctype>

using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> wordCount;
        
        string currentWord = "";
        string maxWord = "";
        int maxCount = 0;

        for (int i = 0; i <= paragraph.length(); ++i) {
            
            if (i < paragraph.length() && isalpha(paragraph[i])) {
                currentWord += tolower(paragraph[i]);
            } 
            else if (currentWord.length() > 0) {
                if (bannedSet.find(currentWord) == bannedSet.end()) {
                    wordCount[currentWord]++;
                    
                    if (wordCount[currentWord] > maxCount) {
                        maxCount = wordCount[currentWord];
                        maxWord = currentWord;
                    }
                }
                currentWord = ""; 
            }
        }

        return maxWord;
    }
};