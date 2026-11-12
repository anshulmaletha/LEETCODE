class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++) {
            int currLength = 1;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] > nums[j - 1]) {
                    currLength++;
                } else {
                    break;
                }
            }
            maxLength = max(maxLength, currLength);
        }

        for (int i = 0; i < nums.size(); i++) {
            int currLength = 1;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[j - 1]) {
                    currLength++;
                } else {
                    break;
                }
            }
            maxLength = max(maxLength, currLength);
        }

        return maxLength;
    }
};