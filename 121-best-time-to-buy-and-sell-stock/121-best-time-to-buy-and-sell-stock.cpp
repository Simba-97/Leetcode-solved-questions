class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro = 0;
        int min_elem = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            min_elem = min(min_elem, prices[i]);
            pro = max(pro, (prices[i]-min_elem));
        }
        return pro;
    }
};