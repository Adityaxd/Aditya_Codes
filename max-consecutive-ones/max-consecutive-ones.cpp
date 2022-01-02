class Solution {

public:
    int _findMaxConsecutiveOnes(vector<int>& nums) {
      int oneSoFar = 0, maxCount = oneSoFar;
        
      for(int i = 0; i < nums.size(); i++) {
          if(nums[i] == 1) {
              oneSoFar += 1;
              maxCount = max(maxCount,oneSoFar);
          } else {
             oneSoFar = 0; 
          } 
      }
        return maxCount;
        
    }    
    
    

public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        return _findMaxConsecutiveOnes(nums);
    }
};