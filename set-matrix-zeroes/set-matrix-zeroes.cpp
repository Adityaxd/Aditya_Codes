class Solution {

public:
    void setZeroesOptimised(vector<vector<int>>& matrix) {
        int col1 = 1, rowSize = matrix.size(), colSize = matrix[0].size();
       
        for(int i = 0; i < rowSize; ++i) {
            if(matrix[i][0] == 0) col1 = 0;
            for(int j = 1; j < colSize; ++j) 
                if(matrix[i][j] == 0) matrix[i][0] = matrix[0][j] = 0;
        }
        
        for(int i = rowSize-1; i >=0; --i) {
            for(int j = colSize-1; j >= 1; --j) 
                if(matrix[i][0] == 0 || matrix[0][j] == 0) 
                    matrix[i][j] = 0;
            if(col1 == 0) matrix[i][0] = 0;
        }
    }

public:
    void setZeroesHashSet(vector<vector<int>>& matrix) {
     
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        
        if(rowSize <= 0) return;
        
        set<int> rowsWithZero;
        set<int> colsWithZero;
        
        for(int i = 0; i < rowSize; i++) {
            for(int j = 0; j < colSize; j++) {
                if (matrix[i][j] == 0) {
                    rowsWithZero.insert(i);
                    colsWithZero.insert(j);
                }
            }
        }
        
        
        for(int i = 0; i < rowSize; i++) {
            for(int j = 0; j < colSize; j++) {
                if(rowsWithZero.count(i) || colsWithZero.count(j)) matrix[i][j] = 0;
            }
        }
        
    }
    
public:
    void setZeroes(vector<vector<int>>& matrix) {
                setZeroesHashSet(matrix);
    }
};