class Solution {
public:
    int minOperationsGauravSen(vector<int>& nums) {
      int sz = nums.size(), mini = sz, j = 0;
        sort(nums.begin(),nums.end());
        nums.erase(unique(begin(nums),end(nums)), end(nums));
        int k = nums.size();
        for(int i = 0; i < k ; i++) {
            while( j < k && nums[j] < nums[i] + sz) j++;
            mini = min(mini, sz - j + i);
        }
        return mini;
    }
public:
    int minOperations(vector<int>& nums) {
        return minOperationsGauravSen(nums);
    }
};