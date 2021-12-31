class Solution {
    
public:
    int _numberOfArithmeticSlices(vector<int>& nums) {      
        int sz = nums.size(), ans = 0;
        if(sz < 3) return 0;
        if(sz == 3) if(nums[2] - nums[1] != nums[1] - nums[0]) return 0; else return 1;
        vector<int> dp(sz);
        dp[0] = dp[1] = 0;
        for(int i = 2; i < sz; ++i) {
            
            int secondNumber = nums[i] - nums[i-1];
            int firstNumber = nums[i-1] - nums[i-2];
            
            if(secondNumber == firstNumber) {
                dp[i] = dp[i - 1] + 1;
                ans += dp[i];
            }
        }
        return ans;
    }    
    
    
    
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        return _numberOfArithmeticSlices(nums);
    }
};