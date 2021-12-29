class Solution {
    
public:
    void merge(vector<int>& nums, int low, int mid, int high, int &revPairCount) {
       int leftInd = low, rightInd = mid+1, r = rightInd, temp[high-low+1], tempInd = 0, count = 0;
        while(leftInd <= mid) {
            while(r <= high && nums[leftInd] > (long)2*nums[r]) count++, r++;
            revPairCount += count;
            while(rightInd <= high && nums[rightInd]<= nums[leftInd]) {
                temp[tempInd++] = nums[rightInd++];
            }
            temp[tempInd++] = nums[leftInd++];
        }
        while(rightInd<=high){
            temp[tempInd++] = nums[rightInd++];
        }
        for(int i = 0; i < tempInd; i++) nums[low++] = temp[i];
    }
    
    
public:
    void mergeSort(vector<int>& nums, int low, int high, int &revPairCount) {
       if(low < high) {
           int mid = low + (high - low) / 2;
           mergeSort(nums, low, mid, revPairCount);
           mergeSort(nums, mid+1, high, revPairCount);
           merge(nums,low,mid,high,revPairCount);
       }
    }    
    
public:
    int reversePairs(vector<int>& nums) {
       int revPairCount = 0;
        int sz = nums.size();
        if(sz <= 1) return revPairCount;
        mergeSort(nums,0,sz-1,revPairCount);
        return revPairCount;
    }
};