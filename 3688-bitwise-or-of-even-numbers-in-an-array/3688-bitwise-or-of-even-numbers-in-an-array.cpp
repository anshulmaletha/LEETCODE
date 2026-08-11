class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int orr = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] % 2 == 0) orr = orr | nums[i];
        }
        return orr;
    }
};