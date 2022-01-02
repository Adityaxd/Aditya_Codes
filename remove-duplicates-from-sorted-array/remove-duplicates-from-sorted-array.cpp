class Solution {
    
public:
    int _removeDuplicates(vector<int>& nums) {
        if(!nums.size()) return 0;
        int i = 0;
        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i]) 
                nums[++i] = nums[j];
        }
        return i + 1;
    }
    
public:
    int removeDuplicates(vector<int>& nums) {
        return _removeDuplicates(nums);
    }
};