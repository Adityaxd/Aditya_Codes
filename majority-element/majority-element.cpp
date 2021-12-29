class Solution {

public:
    int _majorityHashing(vector<int>& nums) {
        
        unordered_map<int,int> ump;
        int sz = nums.size();
        
        for(auto &it : nums) ump[it]++;
        
        for(int i = 0; i < ump.size(); ++i) {
            if(ump[i] > (sz/2)) return i;
        }
        return 0;
    }
    
    
public:
    int _majorityMooreVoting(vector<int>& nums) {
        int count = 0, candidate = 0;
        
        for(int &x : nums) {
            if(count == 0) candidate = x;
            if(x == candidate) count += 1;
            else count--;
        }
        return candidate;
    }

public:
    int majorityElement(vector<int>& nums) {
        // return _majorityHashing(nums);
        return _majorityMooreVoting(nums);
    }
};