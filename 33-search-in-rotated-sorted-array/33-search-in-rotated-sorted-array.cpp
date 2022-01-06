class Solution {
public:
    int Bsearch(vector<int>& nums, int target) {
       int low = 0, high = nums.size() - 1;
        
        while(low <= high) {
            int mid = (low + high) >> 1;
            // if arr[mid] holds the answer.
            if(nums[mid] == target) return mid;
            
            //If the left hand side of array is sorted.
            if(nums[low] <= nums[mid]) {
                if(target <= nums[mid] && target >= nums[low]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            //If the right hand side of the array is sorted.
            else {
                if(target >= nums[mid] && target <= nums[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        return Bsearch(nums,target);
    }
};