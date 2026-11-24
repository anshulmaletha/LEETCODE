class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxx = 0;

        for(int i = 0; i<nums.size(); i++){
            long long l = nums[i];
            long long g = nums[i];
            long long pr = nums[i];
            for(int j = i+1; j<nums.size(); j++) {
                pr = pr * nums[j];
                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);
                if (pr > g * l) break;
                if(pr == g * l) maxx = max(maxx, j-i+1); 
                }
        }
        return maxx;
    }
};