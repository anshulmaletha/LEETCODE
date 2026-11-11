class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        // int m = *max_element(nums.begin(),nums.end());
        int m = nums[0];
        int temp = 0;

        for(int i = 1; i < nums.size(); i++){
            if(m < nums[i]){
            m = nums[i];
            temp = i;
            }
        }
        
        for(int i = 0; i<nums.size(); i++){
            int x = nums[i]*2;
            if(nums[i] == m) continue;
            else if(m < x) return -1;
            
        }
        return temp;
    }
};