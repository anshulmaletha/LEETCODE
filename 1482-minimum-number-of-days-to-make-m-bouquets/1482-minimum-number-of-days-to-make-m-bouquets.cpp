class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end()); 


        if(bloomDay.size() < (long long)m*k) return -1;

        while(low <= high){
            int mid = low + (high - low)/2;
            int ans = 0;
            int count = 0;

            for(int i = 0; i<bloomDay.size(); i++){
                // int day = 0;

                if(bloomDay[i] <= mid){
                    count++;
                    
                    // if(count/k == 1) ans = count; 
                }

                else{
                    ans += (count / k);
                    count = 0;
                }
            }
            ans += (count / k);

            if(ans >= m) {
               high = mid - 1;
            }
            else low = mid + 1;
                                                                                                                                                  
        }

        return low;
    
    }
};