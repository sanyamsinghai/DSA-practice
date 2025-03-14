class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int maxi = 0;

        // for (int i = 0; i < prices.size(); i++) {
        //     int j = prices.size() - 1;
        //     while (i < j) {
        //         int res = prices[j] - prices[i];
        //         maxi = max(maxi, res);
        //         j--;
        //     }
        // }
        // return maxi;

        int min_price = INT_MAX;
        int max_profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min_price) {
                min_price = prices[i];
            }
            int res = prices[i] - min_price;
            max_profit = max(max_profit, res);
        }
        return max_profit;
    }
};