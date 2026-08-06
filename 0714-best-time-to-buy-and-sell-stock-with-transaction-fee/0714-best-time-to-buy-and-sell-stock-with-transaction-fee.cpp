class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {

        int minn = prices[0];
        int profit = 0;

        for(int i = 1; i<prices.size(); i++){
            if(minn > prices[i]) minn = prices[i];

            else if(minn + fee < prices[i]){
                int cost = prices[i] - minn - fee;
                profit += cost;

                minn = prices[i] - fee;
            }
        }

        return profit;
    }
};