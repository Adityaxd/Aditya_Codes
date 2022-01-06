class Solution {
public:
    int _singleNonDuplicate(vector<int>& nums) {
        
        int res = 0, sz = nums.size();
        for(int i = 0; i < sz; i++) 
            res ^= nums[i];
        return res;
    }
public:
    int _singleNonDuplicateBinarySearch(vector<int>& nums) {
        int low = 0, high = nums.size() - 2;
        
        while(low <= high) {
            int mid = (low + high) >> 1;
            
            if(nums[mid] == nums[mid ^ 1]) low = mid + 1;
            else high = mid - 1;
        }
        return nums[low];
    }
public:
    int singleNonDuplicate(vector<int>& nums) {
        // return _singleNonDuplicate(nums);
        return _singleNonDuplicateBinarySearch(nums);
    }
};