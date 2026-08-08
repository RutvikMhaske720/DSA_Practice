#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string result = "";
        string suffix = "a"; 
        
        auto isVowel = [](char c) {
            c = tolower(c);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        while (ss >> word) {
            if (!result.empty()) {
                result += " ";
            }
            
            if (isVowel(word[0])) {
                result += word + "ma";
            } else {
                result += word.substr(1) + word[0] + "ma";
            }
            
            result += suffix;
            
            suffix += "a";
        }
        
        return result;
    }
};