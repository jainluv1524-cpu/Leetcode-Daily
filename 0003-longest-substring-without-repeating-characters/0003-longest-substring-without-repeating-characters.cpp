class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> index(256, -1); // stores the last index of each character
        int maxLen = 0, start = 0;

        for (int end = 0; end < s.size(); end++) {
            if (index[s[end]] >= start) {
                start = index[s[end]] + 1; // move start to avoid repeating char
            }
            index[s[end]] = end; // update last seen index
            maxLen = max(maxLen, end - start + 1); // calculate window size
        }

        return maxLen;
    }
};
