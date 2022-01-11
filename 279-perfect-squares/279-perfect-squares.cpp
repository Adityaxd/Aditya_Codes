class Solution {
public:
    int _numSquares(int n) {
        vector<int> dp(n + 1, 0);
        dp[0] = 0, dp[1] = 1;
        
        for(int i = 2; i <= n; i++) {
            int minSquare = INT_MAX;
            for(int j = 1; j * j <= i; j++) {
                int rem = i - j * j;
                minSquare = min(minSquare, dp[rem]);
            }
            dp[i] = minSquare + 1;
        }
        return dp[n];
    }
public:
    int numSquares(int n) {
      return  _numSquares(n);
    }
};