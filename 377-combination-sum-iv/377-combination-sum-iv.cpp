class Solution {
public:
    int _combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target + 1, 0);
        dp[0] = 1;
        for(int i = 0; i < target ; i++){
            if(!dp[i]) continue;
            for(int x : nums) 
                if( x + i <= target) dp[i + x] += dp[i];
        }
        return dp[target];
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        return _combinationSum4(nums,target);
    }
};