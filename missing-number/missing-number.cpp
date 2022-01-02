class Solution {
    
 public:
    int _missingNumber(vector<int>& nums) {
        int actualSum = 0, arraySum = 0, sz = nums.size();
        
        for(int i = 0; i < sz; ++i) arraySum += nums[i];
        
        actualSum = (sz * (sz + 1)) >> 1;
        
        return (actualSum - arraySum);
        
    }   

public:
    int missingNumber(vector<int>& nums) {
        return _missingNumber(nums);
    }
};