class Solution {
    
public:
    int _trap(vector<int>& height) {
        int sz = height.size(), leftMax = 0, rightMax = 0, left = 0, res = 0, right = sz - 1;
        
        while(left <= right) {
            
            if(height[left] <= height[right]) {
                // if(height[left] >= leftMax) leftMax = height[left]; 
                leftMax = max(leftMax, height[left]);
                //if current height is lesser than the left maximum height, then we can store water, here we are storing water.
                // else
                res += leftMax - height[left]; 
                left++;
            }
            else {
                // if(height[right] >= rightMax) rightMax = height[right];
                rightMax = max(rightMax, height[right]);
                //if current height is lesser than the right maximum height, then we can store water, here we are storing water.
                // else
                res += rightMax - height[right];
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