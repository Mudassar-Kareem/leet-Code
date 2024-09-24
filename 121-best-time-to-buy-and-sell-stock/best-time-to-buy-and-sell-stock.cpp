class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int max_profit = 0;
        for(int price : prices){
            if(price < min_price){
                min_price = price;
            };
            int profit = price - min_price;
            if(profit > max_profit){
                max_profit = profit;
            };
        }
        return max_profit;
    }
};