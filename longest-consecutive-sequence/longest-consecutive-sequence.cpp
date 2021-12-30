class Solution {

public:
    int _longestConsecutiveHash(vector<int>& nums) {
        
        unordered_set<int> st;
        for(auto& it : nums) st.insert(it);
        
        int res = 0;
        
        while(st.size() > 0) {
            int currNum = *st.begin();
            int count = 1;
            st.erase(currNum);
            int smallerNum = currNum - 1;
            int biggerNum = currNum + 1;
            
            while(st.count(smallerNum)) {
                st.erase(smallerNum);
                smallerNum--;
                count++;
            }
            while(st.count(biggerNum)) {
                st.erase(biggerNum);
                biggerNum++;
                count++;
            }
            res = max(res,count);
        }
        return res;  
    }

    
    
    
public:
    int longestConsecutive(vector<int>& nums) {
       return _longestConsecutiveHash(nums);
    }
};