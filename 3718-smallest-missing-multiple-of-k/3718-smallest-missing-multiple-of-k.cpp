class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());
        int temp = k;

        while (st.count(temp)) {
            temp += k;
        }

        return temp;
    }
};