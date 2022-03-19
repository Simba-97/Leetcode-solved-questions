class Solution {
public:
    void countNumberOfIslands(vector<vector<char>>& grid, int i, int j) {
        
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != '1') {
            return;
        }
        
        grid[i][j] = '2';
        
        countNumberOfIslands(grid, i-1, j);
        countNumberOfIslands(grid, i+1, j);
        countNumberOfIslands(grid, i, j-1);
        countNumberOfIslands(grid, i, j+1); 
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int visited[301][301];
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == '1') {
                    countNumberOfIslands(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};