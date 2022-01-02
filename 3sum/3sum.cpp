class Solution {

public:
    vector<vector<int>> _threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int sz = nums.size();
        
        vector<vector<int>> ans;     
        
        for(int a = 0; a < sz - 2; a++) {
            
            if(a == 0 || (a > 0 && nums[a] != nums[a - 1])) {
                
                int b = a + 1, c = sz - 1, sum = 0 - nums[a];
                
                while( b < c ) {
                    
                    if(nums[b] + nums[c] == sum) {
                        
                        vector<int> res;
                        res.push_back(nums[a]);
                        res.push_back(nums[b]);
                        res.push_back(nums[c]);
                        ans.push_back(res);
                        
                        while(b < c && nums[b] == nums[b + 1]) b++;
                        while(b < c && nums[c] == nums[c - 1]) c--;
                        
                        b++,c--;
                    }
                    else if(nums[b] + nums[c] < sum) b++;
                    else c--;
                }
            }
        }
      return ans;
    }
    
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        return _threeSum(nums);
    }
};