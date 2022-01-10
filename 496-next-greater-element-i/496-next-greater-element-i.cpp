class Solution {
public:
    vector<int> _nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m1;
        stack<int> stk;
        int sz = nums2.size();
        
        for(int i = sz-1; i >=0 ; i--) {
           
            while(!stk.empty() && stk.top() < nums2[i]) {
                stk.pop();
            }
            
            if(stk.empty()){ 
                m1[nums2[i]] -= 1;
            }
            
            else {
                m1[nums2[i]] = stk.top();
            }
            
            stk.push(nums2[i]);
        }   
            vector<int> ans;
            for(auto i : nums1) ans.push_back(m1[i]);
 
         return ans;
    }
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        return _nextGreaterElement(nums1,nums2);
    }
};