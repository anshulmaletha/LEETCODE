class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = 0;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            int dayused = 1;
            int currentweight = 0;

            for(int i = 0; i < weights.size(); i++) {
                currentweight += weights[i];

                if(currentweight > mid) {
                    dayused++;
                    currentweight = weights[i];
                }
            }

            if(dayused <= days) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};