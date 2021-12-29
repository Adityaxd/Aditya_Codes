class Solution {
    
public:
    int _maxProfit(vector<int>& prices, int fee) {
        
        int buyStateProfit = -prices[0], sellStateProfit = 0, sz = prices.size();
       
        for(int i = 1; i < sz; ++i) {
            int newBuyStateProfit = 0;
            int newSellStateProfit = 0;
            if(sellStateProfit - prices[i] > buyStateProfit) newBuyStateProfit = sellStateProfit - prices[i];
            else newBuyStateProfit = buyStateProfit;
            if(buyStateProfit + prices[i] - fee > sellStateProfit) newSellStateProfit = buyStateProfit + prices[i] - fee;
            else newSellStateProfit = sellStateProfit;
            
            buyStateProfit = newBuyStateProfit;
            sellStateProfit = newSellStateProfit;
        }
        return sellStateProfit;
    }    
    
public:
    int maxProfit(vector<int>& prices, int fee) {
        return _maxProfit(prices,fee);
    }
};