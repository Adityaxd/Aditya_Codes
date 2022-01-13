class Solution {
public:
    int _findJudge(int n, vector<vector<int>>& trust) {
        vector<int> res(n+1,0);
        
        for(int i = 0; i < trust.size(); i++) {
            res[trust[i][0]]--;
            res[trust[i][1]]++;
        }
        for(int i = 1; i < res.size(); i++) 
            if(res[i] ==  n-1) return i;
        return -1;
    }
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        return _findJudge(n,trust);
    }
};