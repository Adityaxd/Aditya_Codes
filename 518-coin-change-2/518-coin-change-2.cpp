class Solution {
public:
    int _change(int amount, vector<int>& coins) {
        int coinsize = coins.size();
        
        vector<vector<int>> dp(coinsize + 1, vector<int>(amount + 1));
        
        int row, col;
        
        for(int row = 1; row <= amount; row++) dp[0][row] = 0;
        for(int col = 0; col <= coinsize; col++) dp[col][0] = 1;
        
        
        
        for(row = 1; row <= coinsize; row++) {
            for(col = 1; col <= amount; col++) {
                if(col >= coins[row - 1])
                    dp[row][col] = dp[row][col - coins[row - 1]] + dp[row - 1][col];
                else
                    dp[row][col] = dp[row - 1][col];
            }
        }
        return dp[coinsize][amount];
    }
public:
    int change(int amount, vector<int>& coins) {
        return _change(amount,coins);
    }
};