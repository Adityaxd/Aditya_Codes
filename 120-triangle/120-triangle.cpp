class Solution {
    
public:
    int _minimumTotal(vector<vector<int>>& triangle) {
       vector<int> dp = triangle[triangle.size() - 1];
        for(int i = triangle.size() - 2; i >= 0; i--){
            for(int j = 0; j <= i; j++) {
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
            }
        }      
        return dp[0];
    }
    
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        return _minimumTotal(triangle);
    }
};