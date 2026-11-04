class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == nums[nums.size() / 2])
                count++;
        return count == 1;
    }
};