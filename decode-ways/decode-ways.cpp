class Solution {

public:
    int _numDecodings(string s) {
        int sz = s.size();
        vector<int> dp(sz + 1);
        dp[sz] = 1;
        
        for(int i = sz - 1; i >= 0; i--) {
            if(s[i] == '0') dp[i] = 0; 
            else {
                dp[i] = dp[i + 1];
                if(i < sz - 1 && (s[i] == '1' || s[i] == '2' && s[i + 1] < '7')) dp[i] = dp[i] + dp[i + 2];
            }
        }
        return s.empty() ? 0 : dp[0];        
    }
    
public:
    int numDecodings(string s) {
        return _numDecodings(s);
    }
};