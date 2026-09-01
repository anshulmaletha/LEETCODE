class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int minn = INT_MAX;

        while(low <= high){
            int mid = low + (high-low)/2;
            
            if(nums[mid] > nums[high]){
                low = mid + 1;
                minn = min(minn,nums[mid]);
            }

            else {
                high = mid - 1;
                minn = min(minn,nums[mid]);
            }
        }

        return minn;
    }

};