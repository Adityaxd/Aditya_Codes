class Solution {
public:
    int _findDuplicateSet(vector<int>& nums) {
        
        int sz = nums.size();
        unordered_set<int> res;
        
        for(auto &it : nums) {
            if(res.find(it) != res.end()) return it;
            else res.insert(it);
        }
        return -1;
    }
    
public:
    int findDuplicate(vector<int>& nums) {
        return _findDuplicateSet(nums);
    }
};