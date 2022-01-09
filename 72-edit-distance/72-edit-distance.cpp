class Solution {
public:
    int _minDistance(string word1, string word2) {
        int dp[word1.size() + 1][word2.size() + 1];
        for(int i = 0; i <= word1.size(); i++) dp[i][0] = i;
        for(int i = 0; i <= word2.size(); i++) dp[0][i] = i;
        
        for(int i = 1; i <= word1.size(); i++){
            for(int j = 1; j <= word2.size(); j++) {
                if(word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = dp[i-1][j-1];
                }
                else {
                    dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i-1][j-1], dp[i-1][j]));
                }
            }
        }
                    return dp[word1.size()][word2.size()];
    }
public:
    int minDistance(string word1, string word2) {
        return _minDistance(word1,word2);
    }
};