class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minCost = prices[0];
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); i++){
            int cost = prices[i] - minCost;
            maxProfit = max(maxProfit, cost);
            minCost = min(minCost, prices[i]);
        }
        return maxProfit;
    }
};