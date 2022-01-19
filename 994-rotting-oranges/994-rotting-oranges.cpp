class Solution {
public:
    int _orangesRotting(vector<vector<int>>& grid) {
        
        int row = grid.size(), col = grid[0].size(), days = 0, pushedInQueue = 0, totalOranges = 0;
        queue<pair<int,int>> rottenIndices;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] != 0) totalOranges++;
                if(grid[i][j] == 2) rottenIndices.push({i,j});
            }
        }
        
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        
        while(!rottenIndices.empty()) {
            int k = rottenIndices.size();
            pushedInQueue += k;
            while(k--) {
                int x = rottenIndices.front().first, y = rottenIndices.front().second;
                rottenIndices.pop();
                for(int i = 0; i < 4; i++) {
                    int nx = x + dx[i], ny = y + dy[i];
                    if(nx < 0 || ny < 0 || nx >= row || ny >= col || grid[nx][ny] != 1) continue;
                    grid[nx][ny] = 2;
                    rottenIndices.push({nx,ny});
                }
            }
            if(!rottenIndices.empty()) days++;
        }
        return totalOranges == pushedInQueue ? days : -1;
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        return _orangesRotting(grid);
    }
};