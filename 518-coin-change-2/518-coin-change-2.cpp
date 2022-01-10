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
    int change1D(int amount, vector<int>& coins) {
        
       vector<int> dp (amount + 1);
        dp[0] = 1;
        
        for(int i = 0; i < coins.size(); i++) { // loop for the coins given, i ko pay karne ke kitne tareeke hai matlab agar 2 3 5 coins given hai toh pehele 2 ke tareeke then 3 ke then 5 ke.
            for(int j = coins[i]; j < dp.size(); j++) { 
                // j chalega iske liye ki amount kitne tareeke me pay kar sakte hai jaise for coin = 2, 7 ko 7 - 2 => 5 ke jitne tareeke hai pay karne ke uske peeche ek 2 ka coin laga denge toh saare tareeke mil jayenge using coin = 2, 7 pay karne ke.
                dp[j] += dp[j - coins[i]]; //J - coins[i] ko pay karne ke jitne tareeke hai wo add kardenge dp[i] me, jaise 7 calculate kiya toh pehele coin = 2 ke liye dp[5] add hua tha, fir coin = 3 ke liye dp[4] add hua tha, fir coin 5 ke liye dp[2] add hua tha. Jitne tareeke me 5 pay kar sakte hai toh unke peeche agar ek 2 ka coin laga diya jaaye toh wo 7 ko pay karne ka tareeke hojayega na.
            }
        }
        
        return dp[amount];
    }
public:
    int change(int amount, vector<int>& coins) {
        // return _change(amount,coins);
        return change1D(amount,coins);
    }
};