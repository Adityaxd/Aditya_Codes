class Solution {
public:
    int _maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        if(row == 0) return 0;
        int col = matrix[0].size();
        
        vector<vector<int>> dp(row + 1,vector<int>(col+1,0));
        
        int maxSoFar = 0;
        for(int i = 1; i <= row; i++){
            for(int j = 1; j <= col; j++) {
                if(matrix[i-1][j-1] == '1')
                    dp[i][j] = 1 + min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
                maxSoFar = max(dp[i][j],maxSoFar);
            }
        }
        return maxSoFar * maxSoFar;
    }
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        return _maximalSquare(matrix);
    }
};