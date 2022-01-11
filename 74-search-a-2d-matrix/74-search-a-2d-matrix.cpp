class Solution {
public: 
    bool _binarysearch(vector<vector<int>>& mat, int target, int rowSize, int colSize) {  
        
        int lo = 0, hi = (rowSize * colSize) - 1;
        
        while(lo <= hi) {
            int mid = (lo + hi) >> 1;
            if(mat[mid / colSize][mid % colSize] == target) return true;
            else if (mat[mid / colSize][mid % colSize] < target) lo = mid + 1;
            else hi = mid-1;
        }
        return false;
    }
    
    
public:
    bool _searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rowSize = matrix.size(), colSize = matrix[0].size();
        int low = 0, high = rowSize - 1;
        bool res = false;
        for(int i = 0; i < rowSize; i++) {
            res = _binarysearch(matrix, target, rowSize, colSize);
        }  
        return res == true ? true : false;
    }
    
public:
    bool _matrixSearchMoveUpDown(vector<vector<int>>& matrix, int target) { 
        int rowSize = matrix.size(), colSize = matrix[0].size();
        int i = 0, j = colSize - 1;
        while(i < rowSize && j >= 0) {
            if(matrix[i][j] == target) return true;
            if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;
    }
    
    
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // return _matrixSearchMoveUpDown(matrix,target);
        return _searchMatrix(matrix,target);
    }
};