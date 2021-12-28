class Solution {
public:
    void _merge(vector<int>& nums1, int len_1, vector<int>& nums2, int len_2){
        
        int k = (len_1 + len_2) - 1;
        int j = len_2 - 1, i = len_1 - 1;
        
        while(i >= 0 && j >= 0) {
            if(nums2[j] >= nums1[i]) nums1[k--] = nums2[j--]; 
            else nums1[k--] = nums1[i--];
        }
       while(i >= 0) nums1[k--] = nums1[i--];
       while(j >= 0) nums1[k--] = nums2[j--];
    }
    
    
    
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        return _merge(nums1, m, nums2, n);
    }
};