class Solution {
    /*
    1. We iterate both the arrays from the end index and make our way towards the start. 
    2. We initialize 3 pointers to point to the end of arrays, we use i , j & k. 
    3.  i points to the end of entries in the first array i.e. i = len_1 - 1
        j points to the end of entries in the second array i.e. j = len_2 - 1
        k points to the actual end of nums1, since size of nums1 is equal to len_1 + len_2 hence,  k = [(len_1 + len_2) - 1].
    4. Now we iterate using 3 pointers and compare the larger element of the two between i & j and push it in nums1[k].
    5. Then we decrememnt the taken elements pointer and k.
    6. We continue till either i or j reach the first element of their arrays i.e. i >= 0 and j >= 0 
       Using AND instead of OR because we need to terminate the loop if either one of them reaches 0. so T & F = F, 
       whereas T | F = T, the latter will cause code logic error.
    7. This will complete adding all elements from one of the arrays and give us our result and few remaining items.
    8. We copy all remaining elements by using external while loops from nums1 and nums2.
    */

private: 
 void _merge(vector<int>& nums1, int len_1, vector<int>& nums2, int len_2) {
        int k = (len_1 + len_2) - 1;
        int i = len_1 - 1, j = len_2 - 1;
        while( i >= 0 && j >= 0 ) {
            if(nums1[i] >= nums2[j]) nums1[k--] = nums1[i--];
            else nums1[k--] = nums2[j--];
        }
        while(i >= 0) nums1[k--] = nums1[i--];
        while(j >= 0) nums1[k--] = nums2[j--];
    }

public:
    void merge(vector<int>& nums1, int len_1, vector<int>& nums2, int len_2) {
        _merge(nums1, len_1, nums2, len_2);
    }
};