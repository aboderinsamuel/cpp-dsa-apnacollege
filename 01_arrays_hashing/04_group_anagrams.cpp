// Group Anagrams
// Given an array of strings, group the anagrams together.
// Example: ["eat","tea","tan","ate","nat","bat"] -> [["eat","tea","ate"],["tan","nat"],["bat"]]

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Groups words that are anagrams of each other.
    // Time: O(n * k log k) using sorted key (k = average word length)
    // Space: O(n * k)
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

        for (const string& word : strs) {
            string sortedWord = word; // Create a copy of the original word
            sort(sortedWord.begin(), sortedWord.end()); // Sort the characters to get the key
            anagramMap[sortedWord].push_back(word); // Group the original word under the sorted key
        }

        vector<vector<string>> result;
        for (const auto& pair : anagramMap) {
            result.push_back(pair.second); // Add each group of anagrams to the result
        }

        return result;
    }
};
