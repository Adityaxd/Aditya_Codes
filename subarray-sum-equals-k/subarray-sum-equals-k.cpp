class Solution {
public:
    int _subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> hashSet;
        int sum = 0, count = 0, sz = nums.size(); 
        hashSet[0] = 1;
        
        for(int i = 0; i < sz; ++i) {
            sum += nums[i];
            
            if(hashSet.find(sum - k) != hashSet.end()) count+= hashSet[sum - k];
            hashSet[sum]++;
        }
        return count;       
    }
    
 public:
    int _subarraySumEasierToUnderstand(vector<int>& nums, int k) {   
    
        unordered_map<int,int> hashSet;
        hashSet[0] = 1; 
        int preSum = 0, sz = nums.size(), counter = 0;
        
        for(int i = 0; i < sz; ++i) {
            preSum += nums[i];
            int frequencyOfFoundAt = preSum - k;
            if(hashSet.find(frequencyOfFoundAt) != hashSet.end()) counter += hashSet[frequencyOfFoundAt];
            hashSet[preSum]++;
        }   
        return counter;
    }
    
public:
    int subarraySum(vector<int>& nums, int k) {
        // return _subarraySum(nums,k);
        return _subarraySumEasierToUnderstand(nums,k);
    }
};