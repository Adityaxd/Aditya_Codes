class Solution {
    
public:
    vector<int> _twoSum(vector<int>& nums, int target) {
        
        int sz = nums.size();
        unordered_map<int,int> ump;
        
        for(int i = 0; i < sz; ++i) {
            if(ump.find( target - nums[i]) != ump.end()) {
                return {ump[target - nums[i]], i};
            }
            ump[nums[i]] = i;
        }
        return {};
    }    
    
    
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        return _twoSum(nums,target);
    }
};