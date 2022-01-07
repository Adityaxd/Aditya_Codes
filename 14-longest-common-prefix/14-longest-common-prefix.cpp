class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) {
            return "";
        }
        string res = "";
        sort(strs.begin(), strs.end());
        string first = strs[0]; 
        string last = strs[n-1];
        int limit = min(first.length(), last.length());
        for(int i = 0; i < limit; i++) {
            if(first[i] == last[i]) {
                res += first[i];
            }    
            else {
                break;
            }
        }
        return res;
    }
};