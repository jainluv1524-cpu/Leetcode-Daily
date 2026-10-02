class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(result, "", 0, 0, n);
        return result;
    }

private:
    void generate(vector<string>& result, string current, int open, int close, int n) {
        // If the current string has reached the max length (2*n), store it
        if (current.size() == n * 2) {
            result.push_back(current);
            return;
        }

        // Add '(' if we still can
        if (open < n)
            generate(result, current + "(", open + 1, close, n);

        // Add ')' if valid (can't close more than opened)
        if (close < open)
            generate(result, current + ")", open, close + 1, n);
    }
};
