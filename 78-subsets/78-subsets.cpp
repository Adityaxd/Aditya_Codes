class Solution {
 public:
    void calculateSubSets(int idx, int sum, int sz, vector<int>& nums, vector<vector<int>>& res) {
        
    }
public:
    vector<vector<int>> bitWise(vector<int>& nums) {
        int powersetSize = 1 << nums.size();
       vector<vector<int>> powerSet(powersetSize);
        for(int counter = 0; counter < powersetSize; counter++) {
            for(int j = 0; j < nums.size(); j++) {
                if(counter & (1 << j)) {
                    powerSet[counter].push_back(nums[j]);
                  }
            }
        }
        return powerSet;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       return bitWise(nums);
    }
};