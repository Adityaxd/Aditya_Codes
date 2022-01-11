class Solution {
 public:
    int _searchInsert(vector<int>& nums, int target) {

        int low = 0, high = nums.size(), mid;
        
        while(low < high) {
            mid = (low + high) >> 1;
            if(nums[mid] >= target) high = mid;
            else low = mid + 1;
        }
        return low;
    }
    
public:
    int searchInsert(vector<int>& nums, int target) {
        return _searchInsert(nums,target);
    }
};