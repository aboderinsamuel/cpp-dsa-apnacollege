#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // stack to hold open brackets

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                // Push open brackets onto the stack
                st.push(c);
            } else {
                // If stack is empty, no matching open bracket
                if (st.empty()) return false;

                // Check if top matches current closing bracket
                char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false; // mismatch
                    }

                // Correct match, pop from stack
                st.pop();
            }
        }

        // If stack is empty, all brackets matched
        return st.empty();
    }
};
