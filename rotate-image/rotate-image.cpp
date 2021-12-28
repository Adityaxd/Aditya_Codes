class Solution {     
   
public: 
    void Transpose(vector<vector<int>>& matrix) {
        int sz = matrix.size();
        for(int i = 0; i < sz; ++i) {
            for(int j = 0; j < i; ++j) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    
public: 
    void TransposeReverse(vector<vector<int>>& matrix) {
        int sz = matrix.size();
        Transpose(matrix);
        for(int i = 0; i < sz; ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }


public:
    void rotate(vector<vector<int>>& matrix) {
        TransposeReverse(matrix);
    }
};