class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        vector<vector<int>> temp;
        int count = 0;
        int weight = 0;

        for(int i = 0; i<(n*n) ; i++){
            weight += w;
            if(weight > maxWeight) break;
            count++;
        }
        return count;
    }
};