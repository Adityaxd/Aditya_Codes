class Solution {

public:
    vector<vector<int>> deegenerate(int numRows) {
        vector<vector<int>> res;
        for(int i = 1; i <= numRows; i++){
            vector<int> v = vector<int>(i,1);
            if(i>2){
                for(int j = 1; j <= v.size()-2; j++){
                    v[j] = res[res.size()-1][j-1] + res[res.size()-1][j];
                }
            }
            res.push_back(v);
        }
        return res;
    }
    
public:
    vector<vector<int>> deGen(int numRows) {
        vector<vector<int>> res(numRows);
        
        for(int i = 0; i < numRows; i++){
            res[i].resize(i + 1);
            res[i][0] = res[i][i] = 1;
        
            for(int j = 1; j < i; j++) {
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res;
    }
    
public:
    vector<vector<int>> generate(int numRows) {
        return deGen(numRows);
    }
};