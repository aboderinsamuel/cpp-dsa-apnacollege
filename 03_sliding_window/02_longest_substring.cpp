#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int left = 0;
        int maxLength = 0;

        for(int right=0; right < s.size(); right++){
            char currentChar = s[right]; // created a new var, to monitor inside s[right]
            if(charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= left){
                left = charIndex[currentChar] + 1;
            }
            charIndex[currentChar] = right;
            maxLength = max(maxLength, right-left + 1);
        }
        return maxLength;
    }
};