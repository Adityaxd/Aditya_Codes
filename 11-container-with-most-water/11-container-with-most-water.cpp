class Solution {
public:
    int _maxArea(vector<int>& height) {
        int res = 0, left = 0, right = height.size() - 1;
        res = abs(right - left) * min(left,right);
        while(left < right) {
            res = max(res, abs(right - left) * min(height[left],height[right]));
            if(height[left] < height[right]) 
                left++;
            else right--;
        }
        return res;
    }
public:
    int maxArea(vector<int>& height) {
        return _maxArea(height);
    }
};