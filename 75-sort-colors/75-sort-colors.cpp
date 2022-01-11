class Solution {

public: 
    void SortTwoVariable(vector<int>& nums) {
        
        int zero = 0, one = 0, sz = nums.size();
        
        for(int i = 0; i < sz; ++i) {
            if(nums[i] == 0) zero++;
            else if (nums[i] == 1) one++;
        }
        int i = 0;
        
        while(zero) {
            nums[i++] = 0;
            zero--;
        }
        while(one) {
            nums[i++] = 1;
            one--;
        }
        while(i < sz) {
            nums[i] = 2;
            i++;
        }
    }   
    
public:
    void DutchFlag(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        
        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[mid],nums[low]);
                low++, mid++;
            }
            else if(nums[mid] == 1) mid++;
            else {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
    
public:
    void sortColors(vector<int>& nums) {
        // SortTwoVariable(nums);
        DutchFlag(nums);
    }
};