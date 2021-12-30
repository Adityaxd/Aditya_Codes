class Solution {

public:
    vector<vector<int>> _fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int sz = nums.size();
        for(int i = 0; i < sz; ++i) {
            for(int j = i + 1; j < sz; ++j) {
                int start = j + 1;
                int end = sz - 1;
                int target_2 = target - nums[i] - nums[j];
                while(start < end) {
                    int startEndSum = nums[start] + nums[end];
                    if(startEndSum > target_2) end--;
                    else if(startEndSum < target_2) start++;
                    else {
                        vector<int> quad(4,0);
                        quad[0] = (nums[i]);
                        quad[1] = (nums[j]);
                        quad[2] = (nums[start]);
                        quad[3] = (nums[end]);
                        res.push_back(quad);
        
                    while(start < end && nums[start] == quad[2]) start++;
                    while(end > start && nums[end] == quad[3]) end--;
                        
                    }
                }
                while(j + 1 < sz && nums[j + 1] == nums[j]) j++;
            }
            while(i + 1 < sz && nums[i + 1] == nums[i]) i++;
        }    
        return res;
    }    
    
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        return _fourSum (nums, target);
    }
};