class Solution {
    
public:
    int _uniquePathRecursion(int i, int j, int m, int n) {
        
        if(i == m-1 && j == m-1) return 1;
        if (i >= m || j >= n) return 0;
        else return _uniquePathRecursion(i + 1, j , m , n) + _uniquePathRecursion(i, j + 1, m , n);
    }
    
public: 
    int _uniquePathDP(int i, int j, int m , int n, vector<vector<int>>& dp) {
        
        if(i == m - 1 && j == n - 1) return 1;
        if(i >= m || j >= n) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        else return dp[i][j] = _uniquePathDP(i + 1,j,m,n,dp) + _uniquePathDP(i ,j + 1,m,n,dp);
    }
    
public:
    int _uniquePathsMath(int m, int n) {
        
        int N = n + m - 2;
        int r = m - 1;
        double res = 1;
        
        for(int i = 1; i <= r; ++i) 
            res = res * (N - r + i) / i;
        return res;
    }    
    
public:
    int uniquePaths(int m, int n) {
        
//         return _uniquePathRecursion(0,0,m,n);
        
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         return _uniquePathDP(0,0,m,n,dp)
            
        return _uniquePathsMath(m,n);
    }
};