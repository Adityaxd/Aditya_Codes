class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backTrack(res,"",0,0,n);
        return res;
    }
void backTrack(vector<string>& res, string path, int open, int close, int max) {
    if(path.size() == 2*max) {
        res.push_back(path);
        return;
    }
    if(open < max) 
        backTrack(res,path + '(', open+1, close, max);
    if(close < open) 
        backTrack(res,path + ')', open, close + 1, max);
}
};