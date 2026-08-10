class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {

        vector<int> temp;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0)
                temp.push_back(nums[i]);
        }

        if (temp.size() <= 1)
            return nums;

        k = k % temp.size();
        reverse(temp.begin(), temp.begin() + k);
        reverse(temp.begin() + k, temp.end());
        reverse(temp.begin(), temp.end());

        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                nums[i] = temp[j];
                j++;
            }
        }

        return nums;
    }
};