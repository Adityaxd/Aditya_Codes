class Solution {
public:
    int _maxProfit(vector<int>& price) {
        
        int sz = price.size(), profit = 0;
        
        for(int dip = 0; dip < sz-1; ++dip){
            int rise = dip + 1;
            if(price[rise] > price[dip]) 
                profit += price[rise] - price[dip];
        }
        
        return profit;
    }
public:
    int maxProfit(vector<int>& prices) {
        return _maxProfit(prices);
    }
};