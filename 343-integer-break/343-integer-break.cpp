class Solution {
public:
    int integerBreakDP(int n) {
       vector<int> dp(n + 1, 1);
        
        for(int i = 3; i <=n ; i++) {
            for(int j = 1; j < i; j++) {
                dp[i] = max(dp[i],  max({dp[i - j] * dp[j], dp[i - j] * j, (i - j) * j}));
            }
        }
        return dp[n];
    }
public:
    int integerBreakMath(int n) { 
        if(n <= 3) return n - 1;
        if(n % 3 == 0) return pow(3, n/3);
        if(n % 3 == 2) return pow(3, n/3) * 2;
        return pow(3 , (n / 3) - 1) * 4;
    }
    
public:
    int integerBreak(int n) {
        // return integerBreakDP(n);
        return integerBreakMath(n);
    }
};