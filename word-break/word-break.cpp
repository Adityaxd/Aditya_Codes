class Solution {
public:
    bool _wordBreak(string s, vector<string>& wordDict) {
        int sz = s.size();
        vector<bool> dp(sz + 1, false);
        dp[0] = true;
        
        for(int i = 1; i <= sz; i++) {
            for(int j = 0; j < i; j++) {
                if ((dp[j]) && (find(wordDict.begin(), wordDict.end(), s.substr(j, i - j)) != wordDict.end())){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp.back();
    }   
    
    
    
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        return _wordBreak(s, wordDict);
    }
};