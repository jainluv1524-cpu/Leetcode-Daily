class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int> ravolqedin = nums1;
        int mn = *min_element(nums1.begin(), nums1.end());
        bool allEven = true, allOdd = true;
        for (int x : nums1) {
            if (x % 2 != 0) allEven = false;
            if (x % 2 == 0) allOdd = false;
        }
        if (allEven || allOdd) return true;
        if (mn % 2 == 0) return false;
        return true;
    }
};