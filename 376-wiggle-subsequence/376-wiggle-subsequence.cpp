class Solution {
public:
    int peakSoln(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        int sz = nums.size();
        int i = 1; 
        while(i < sz && nums[i] == nums[i - 1]) i++;
        if(i == sz) return 1;
        
        int c = 2;
        
        bool inc = nums[i] > nums[i - 1];
        while(i < sz) {
            if(inc) {
                while(i < sz && nums[i] >= nums[i - 1]) i++;
                if(i < sz) c++; inc = false;
            }
            else {
                while(i < sz && nums[i] <= nums[i - 1]) i++;
                if(i < sz) c++; inc = true;
            }
        }      
        return c;
    }
public:
    int wiggleMaxLength(vector<int>& nums) {
        return peakSoln(nums);
    }
};