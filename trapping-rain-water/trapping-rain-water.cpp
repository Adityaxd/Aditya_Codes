class Solution {
    
public:
    int _trap(vector<int>& height) {
        int sz = height.size(), leftMax = 0, rightMax = 0, left = 0, res = 0, right = sz - 1;
        
        while(left <= right) {
            if(height[left] <= height[right]) {
                if(height[left] >= leftMax) leftMax = height[left]; 
                else res += leftMax - height[left];
                left++;
            }
            else {
                if(height[right] >= rightMax) rightMax = height[right];
                else res += rightMax - height[right];
                right--;
            }
        }
        return res;
    }    
    
    
public:
    int trap(vector<int>& height) {
        return _trap(height);
    }
};