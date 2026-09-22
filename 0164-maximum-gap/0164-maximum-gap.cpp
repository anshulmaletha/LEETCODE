class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxx = 0;
        if(nums.size() < 2) return 0;
        
       for(int i = 0 ; i<nums.size()-1; i++){
           int m = nums[i+1] - nums[i];
           maxx = max(maxx,m);
       }       
       return maxx; 
    }
};