class Solution {

public:
    int _nthUglyNumber(int n) {
        vector<int> dp(n + 1);
        
        dp[1] = 1;
        
        int ptr_2 = 1, ptr_3 = 1, ptr_5 = 1;
        
        for(int i = 2; i <=n ; i++) {
            
            int factor_1 = 2 * dp[ptr_2];
            int factor_2 = 3 * dp[ptr_3];
            int factor_3 = 5 * dp[ptr_5];
            
            int min_factor = min(factor_1, min(factor_2,factor_3));
            
            dp[i] = min_factor;
            
            if(min_factor == factor_1) ptr_2++;
            if(min_factor == factor_2) ptr_3++;
            if(min_factor == factor_3) ptr_5++;
        }
        return dp[n];
    }
    
    
public:
    int nthUglyNumber(int n) {
        return _nthUglyNumber(n);
    }
};