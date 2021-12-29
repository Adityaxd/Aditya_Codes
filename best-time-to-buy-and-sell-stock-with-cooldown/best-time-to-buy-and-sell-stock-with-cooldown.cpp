class Solution {
public:
    int _maxProfitStateMachine(vector<int>& prices) {
        int sz = prices.size();
        if(sz <= 1) return 0;
        
        vector<int> noStock(sz,0), inHand(sz,0), stockSold(sz,0);
        noStock[0] = 0;
        inHand[0] = -prices[0];
        stockSold[0] = 0;
        
        for(int i = 1; i < sz; ++i) {
            
            noStock[i] = max(noStock[i-1], stockSold[i-1]);
            inHand[i] = max(inHand[i-1], noStock[i-1] - prices[i]);
            stockSold[i] = inHand[i-1] + prices[i];
        }
        return max(noStock[sz-1], stockSold[sz-1]);
    }


public:
    int maxProfit(vector<int>& prices) {
        return _maxProfitStateMachine(prices);
    }
};