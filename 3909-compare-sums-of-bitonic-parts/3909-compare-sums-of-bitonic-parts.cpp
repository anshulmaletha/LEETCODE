class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int temp = 0;

        for(int i = 1; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1] && nums[i] > nums[i-1]) temp = i;
        }

        long long sum1 = 0;
        long long sum2 = 0;

        for(long long i = 0; i<= temp ; i++) sum1 += nums[i];
        for(long long i = temp ; i<nums.size() ; i++) sum2 += nums[i];
        
        if(sum1 > sum2 ) return 0;
        else if(sum1 < sum2) return 1;
        else return -1;
    }
};