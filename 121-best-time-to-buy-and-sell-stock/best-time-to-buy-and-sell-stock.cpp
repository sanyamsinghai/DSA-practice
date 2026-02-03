class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        // brute force
        int max_profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                int profit = (prices[j] - prices[i]);
                max_profit = max(max_profit, profit);
            }
        }
        return max_profit;
        */

        int max_profit = INT_MIN;
        int min_price = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
            if (min_price > prices[i]) {
                min_price = prices[i];
            }
            int sub = prices[i] - min_price;
            max_profit = max(max_profit, sub);
        }

        return max_profit;
    }
};