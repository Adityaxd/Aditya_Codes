class Solution {

public:
    int minMaxMaintain(vector<int>& nums) {
        int maxi = nums[0], mini = nums[0], ans = maxi, sz = nums.size();
        
        for(int i = 1; i < sz; ++i) {
            int temp_max = max(nums[i], max(maxi * nums[i], mini * nums[i]));
            mini = min(nums[i], min(nums[i] * maxi, nums[i] * mini));
            maxi = temp_max;
            ans = max(ans,maxi);
        }
        return ans;
    }

public:
    int maxProduct(vector<int>& nums) {
        return minMaxMaintain(nums);
    }
};