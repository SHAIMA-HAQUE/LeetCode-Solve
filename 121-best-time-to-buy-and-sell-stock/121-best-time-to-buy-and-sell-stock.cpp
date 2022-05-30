class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price_so_far = numeric_limits<int>::max(), max_profit = 0;
        for(const int price:prices){
            int max_profit_sell = price - min_price_so_far;
            max_profit = max(max_profit, max_profit_sell);
            min_price_so_far = min(min_price_so_far, price);
        }
        return max_profit;
    }
};