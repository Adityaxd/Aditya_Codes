class Solution {
public:
    int _maxProfit(vector<int>& prices) { 
        int minOnLeft = INT_MAX, profit = 0, sz = prices.size();
        
        for(int i = 0; i < sz; ++i) {
            minOnLeft = min(minOnLeft, prices[i]);
            profit = max(profit, prices[i] - minOnLeft);
        }
        return profit;
    }    

public:
    int maxProfit(vector<int>& prices) {
        return _maxProfit(prices);
    }
};