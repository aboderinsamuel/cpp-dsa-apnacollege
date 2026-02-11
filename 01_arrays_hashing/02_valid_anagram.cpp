#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> freq(26, 0);
        for (char c : s){
            freq[c - 'a']++;
            freq[c - 'a']--;

            for (int count : freq) {
                if (count != 0) return false;
            }
            return true;
        }
    }
};

int main() {
    Solution sol;
    string s = "goliath", t = "golliath";
    string s2 = "goliath", t2 = "goliath";
    cout << "Test 1-- "<< (sol.isAnagram(s,t) ? "PASS" : "FAIL") << endl;
    cout << "Test 2 -- "<< (sol.isAnagram(s2,t2) ? "PASS" : "FAIL") << endl;

}