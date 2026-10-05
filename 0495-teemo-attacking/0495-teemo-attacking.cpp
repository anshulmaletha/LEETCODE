class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int count = duration;

        for(int i = 1; i<timeSeries.size(); i++){
            int m = timeSeries[i];
            int n = timeSeries[i] + duration - 1;

            if(timeSeries[i] - timeSeries[i-1] <= duration) count += timeSeries[i] - timeSeries[i-1];
            else count += duration;
        }

        return count;
        
    }
};
// timeSeries = [1,10] , duration = 3