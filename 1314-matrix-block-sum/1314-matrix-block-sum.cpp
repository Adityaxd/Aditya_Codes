class Solution {
public:
    int sizeX, sizeY;
    int getSum(int i , int j, const vector<vector<int>>& sum) {
        if (i < 0 || j < 0) return 0;
        if( i >= sizeX) i = sizeX - 1;
        if(j >= sizeY) j = sizeY - 1;
        return sum[i][j];
    }   
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        sizeX = mat.size();
        sizeY = mat[0].size();
        
        vector<vector<int>> sum(sizeX, vector<int>(sizeY, 0));
        //caluclating prefix sum matrix
        for(int i = 0; i < sizeX; i++)
            for(int j = 0; j < sizeY; j++) 
                sum[i][j] = mat[i][j] + getSum(i - 1, j, sum) + getSum(i , j - 1, sum) - getSum(i - 1, j - 1, sum);
        
        //get our reqd sum from calculated prefix matrix
        vector<vector<int>> ans(sizeX, vector<int>(sizeY, 0));
        for(int i = 0; i < sizeX; i++) 
            for(int j = 0; j < sizeY; j++) 
                    ans[i][j] = getSum(i+k, j+k, sum) - getSum(i+k, j-k-1,sum) - getSum (i-k-1, j+k, sum) + getSum(i-k-1, j-k-1, sum);
        
        return ans;
    }
};