class Solution {
public: 
    void permuteRec (vector<int> &nums, int begin, vector<vector<int> > &res)    {
    if(begin >= nums.size()){
        res.push_back(nums);
        return;
    }
    for(int i = begin; i < nums.size(); ++i){
        swap(nums[begin],nums[i]);
        permuteRec(nums,begin+1, res);
        swap(nums[begin],nums[i]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > res;
        permuteRec(nums,0,res);
        return res;
    }
};