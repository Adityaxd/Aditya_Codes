class Solution {
public: 
    int Kadanes(vector<int>& nums) { 
        int maxSoFar = nums[0], result = maxSoFar, sz = nums.size();;
        for(int i = 1; i < sz; i++) {
            maxSoFar = max(nums[i] + maxSoFar, nums[i]);
            result = max(maxSoFar, result);
        }
        return result;       
    }
    
public:
    int maxSubb(vector<int> &nums) {
       int maxSum = INT_MIN, currSum = 0, sz = nums.size();
        for(int i = 0; i < sz; i++) {
            currSum += nums[i];
            maxSum = max(maxSum, currSum);
            if(currSum < 0) currSum = 0;
        }
        return maxSum;
    }
    
public:
    int maxSubArray(vector<int>& nums) {
       // return Kadanes(nums);
        return maxSubb(nums);
    }
};