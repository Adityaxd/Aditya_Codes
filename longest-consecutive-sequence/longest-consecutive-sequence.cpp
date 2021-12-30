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
    int _longestConsecutiveReadable(vector<int>& nums) {
    
        set<int> hashSet;
        for(auto& it : nums) hashSet.insert(it);
        
        int longestStreak = 0;
        
        for(int& num : nums) {
            if(!hashSet.count(num - 1)) {
                int currNum = num;
                int currStreak = 1;
                while(hashSet.count(currNum + 1)) {
                    currStreak += 1;
                    currNum += 1;
                }
                longestStreak = max(longestStreak, currStreak);
            }
        } 
        return longestStreak;
    }
    
    
    
public:
    int longestConsecutive(vector<int>& nums) {
       // return _longestConsecutiveHash(nums);
       return _longestConsecutiveReadable(nums);
    }
};