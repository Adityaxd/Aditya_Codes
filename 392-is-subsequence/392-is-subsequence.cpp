class Solution {
public:
    bool _isSubsequence(string s, string t) {

        int i = 0, j = 0;
        while(i < s.size() && j < t.size()){
            if(s[i] == t[j])
                i++;
            j++;
        }
        return i == s.size();
    }
public:
    bool isSubsequence(string s, string t) {
        return _isSubsequence(s,t);
    }
};