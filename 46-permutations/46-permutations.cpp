class Solution {
public: 
    void permuteRec (vector<int> &nums, int swapPtr, vector<vector<int> > &res)    {
        if(swapPtr >= nums.size()) {
            res.push_back(nums);
            return;
        }
        for(int i = swapPtr; i < nums.size(); i++) {
            swap(nums[swapPtr],nums[i]);
            permuteRec(nums,swapPtr + 1, res);
            swap(nums[swapPtr],nums[i]);
        }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > res;
        permuteRec(nums,0,res);
        return res;
    }
};