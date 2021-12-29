class Solution {
    
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
        return _uniquePathsMath(m,n);
    }
};