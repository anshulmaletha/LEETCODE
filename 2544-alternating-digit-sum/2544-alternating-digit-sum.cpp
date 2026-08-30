class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> nums;

        while (n > 0) {
            nums.push_back(n % 10);
            n = n / 10;
        }
        int res = 0;

        reverse(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i += 2) res += nums[i];
        
        for (int i = 1; i < nums.size(); i += 2) res -= nums[i];

        return res;
    }
};