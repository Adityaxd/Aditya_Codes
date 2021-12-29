class Solution {
    
public:
    vector<int> _majorityElementHashing(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        int sz = nums.size() / 3;
        
        for(auto& it : nums) mp[it]++;
        
        for(int i = 0; i < mp.size(); ++i) {
            if(mp[i] > sz) ans.push_back(i);
        }
        return ans;
    }    
    
public:
    vector<int> _boydMooreVoting(vector<int>& nums) {    
        int sz = nums.size();
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0;
        
        for(int i = 0; i < sz; ++i){
            if(nums[i] == num1) count1++;
            else if(nums[i] == num2) count2++;
            else if(count1 == 0) {num1 = nums[i]; count1 = 1;}
            else if(count2 == 0) {num2 = nums[i]; count2 = 1;}
            else {
                count1--, count2--;
            }
        }
        vector<int> ans;
        count1 = count2 = 0;
        for(int i = 0; i < sz; ++i) {
            if(nums[i] == num1) count1++;
            else if (nums[i] == num2) count2++;
        }
        if(count1 > sz/3) ans.push_back(num1);
        if(count2 > sz/3) ans.push_back(num2);
        return ans;
    }
    
    
public:
    vector<int> majorityElement(vector<int>& nums) {
        // return _majorityElementHashing(nums);
        return _boydMooreVoting(nums);
    }
};