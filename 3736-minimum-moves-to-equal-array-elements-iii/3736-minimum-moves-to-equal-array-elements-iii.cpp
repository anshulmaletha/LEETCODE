class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
        int maxx = *max_element(nums.begin(), nums.end());

        for(int i = 0; i<nums.size(); i++) count += maxx - nums[i];
        return count;
    }
};