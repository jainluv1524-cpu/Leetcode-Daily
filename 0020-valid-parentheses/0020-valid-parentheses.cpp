class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            // Push opening brackets
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // Check closing brackets
            else {
                if (st.empty()) return false; // No opening bracket available

                char top = st.top();
                st.pop();

                // Matching pairs
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        // Stack should be empty if all brackets matched
        return st.empty();
    }
};
