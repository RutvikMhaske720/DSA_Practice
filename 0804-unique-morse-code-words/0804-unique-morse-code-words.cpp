#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",
            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
            "...","-","..-","...-",".--","-..-","-.--","--.."
        };
        
        unordered_set<string> unique_transformations;
        
        for (const string& word : words) {
            string transformation = "";
            for (char c : word) {
                transformation += morse[c - 'a'];
            }
            unique_transformations.insert(transformation);
        }
        
        return unique_transformations.size();
    }
};