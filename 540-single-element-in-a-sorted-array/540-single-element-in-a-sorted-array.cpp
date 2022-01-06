class Solution {
public:
    int _singleNonDuplicate(vector<int>& nums) {
        
        int res = 0, sz = nums.size();
        for(int i = 0; i < sz; i++) 
            res ^= nums[i];
        return res;
    }
public:
    int singleNonDuplicate(vector<int>& nums) {
        return _singleNonDuplicate(nums);
    }
};