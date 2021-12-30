class Solution {
    
public:
    int _lengthOfLongestSubstring(string s) {
        
        set<char> st;
        int sz = s.size(), count = 0, left = 0, right = 0, maxLen = 0;
        
        while(right < sz) {
            
            if(st.find(s[right]) != st.end()) {st.erase(s[left]); left++; }
            else { st.insert(s[right]);  maxLen = max(maxLen, right - left + 1); right++;}
        }
        
        return maxLen;       
    }        
public:
    int lengthOfLongestSubstring(string s) {
        return _lengthOfLongestSubstring(s);
    }
};