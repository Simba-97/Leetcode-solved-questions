class Solution {
public:
    
    void dfs(int i, int j, vector<vector<int>>& grid1, vector<vector<int>>& grid2, int &flag, int m, int n){
        if(i < 0 || j < 0 || i >= m || j >= n || grid2[i][j] == 0) return;
        if(grid1[i][j] == 0) flag = 0;
        grid2[i][j] = 0;
        dfs(i-1, j, grid1, grid2, flag, m, n);
        dfs(i+1, j, grid1, grid2, flag, m, n);
        dfs(i, j-1, grid1, grid2, flag, m, n);
        dfs(i, j+1, grid1, grid2, flag, m, n);
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int ans = 0;
        int m = grid1.size(), n = grid1[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid2[i][j]) {
                    int flag = 1;
                    dfs(i, j, grid1, grid2, flag, m, n);
                    ans += flag;
                }
            }
        }
        return ans;
    }
};