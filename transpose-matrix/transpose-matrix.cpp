class Solution {
public:
    vector<vector<int>> _transpose(vector<vector<int>>& matrix) {
        
        int rowSize = matrix.size(), colSize = matrix[0].size();
        
        vector<vector<int>> new_matrix(colSize, vector<int>(rowSize));
            
        for(int i = 0; i < colSize; i++)
            for(int j = 0; j < rowSize; j++) 
                new_matrix[i][j] = matrix[j][i];
        
        return new_matrix;
    }
    
    
    
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        return _transpose(matrix);
    }
};