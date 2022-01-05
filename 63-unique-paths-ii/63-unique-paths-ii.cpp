class Solution {
public:
    int _uniquePathsWithObstacles(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>>dp(rows, vector<int>(cols,0));
        
        bool obstacleFound = false;
        
        for(int i = 0; i < cols; i++) {
            if(obstacleFound == true || grid[0][i] == 1) {
                obstacleFound = true;
                dp[0][i] = 0;
            }
            else dp[0][i] = 1;
        }
        obstacleFound = false;
        
        for(int i = 0; i < rows; i++) {
            if(obstacleFound == true || grid[i][0] == 1) {
                obstacleFound = true;
                dp[i][0] = 0;
            }
            else dp[i][0] = 1;
        }
        
        for(int i = 1; i < rows; i++) {
            for(int j = 1; j < cols; j++) {
                int obstacleFound = grid[i][j];
                if(obstacleFound == 1) 
                    dp[i][j] = 0;
                else 
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[rows - 1][cols - 1];
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        return _uniquePathsWithObstacles(grid);
    }
};