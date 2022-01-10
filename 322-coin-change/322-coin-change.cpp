class Solution {
public:
    int _coinChange(vector<int>& coins, int amount) {
    int dp[coins.size()+1][amount+1];
        for(int i = 0; i <= coins.size(); i++){
            for(int j = 0; j <= amount; j++){
                if(j==0) dp[i][j] = 0;
                else if(i == 0) dp[i][j] = 1e9;
                else if (coins[i-1]>j) 
                    dp[i][j] = dp[i-1][j];
                else 
                    dp[i][j] = min(1 + dp[i][j-coins[i-1]], dp[i-1][j]);
            }
        }
        return dp[coins.size()][amount] > 1e4 ? -1 : dp[coins.size()][amount];
    }    
    
public:
    int _coinChangeAdityaVerma(vector<int>& coins, int amount) {  
        int sz = coins.size();
        vector<vector<int>> dp(sz + 1, vector<int>(amount + 1));
        
        for(int i = 0; i <= sz; i++) {
            for(int j =  0; j <= amount; j++) {
                if(j == 0) dp[i][j] = 0;
                else if (i == 0) dp[i][j] = INT_MAX - 1;
                else if (coins[i - 1] <= j) 
                    dp[i][j] = min( 1 + dp[i][j - coins[i - 1]] , dp[i-1][j]);
                else 
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[sz][amount] >= INT_MAX - 1 ? -1 : dp[sz][amount];
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        // return _coinChange(coins,amount);
        return _coinChangeAdityaVerma(coins,amount);
    }
};