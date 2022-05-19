class Solution {
public:
    vector<vector<int>> dir = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};
    int dfs(vector<vector<int>>& matrix, int m, int n, int i, int j, vector<vector<int>>& dp) {
        int maxPath = 0;
        if(dp[i][j] > 0) {
            return dp[i][j];
        }
        for(auto x : dir) {
            int p = i + x[0];
            int q = j + x[1];
            if(p >= 0 and q >= 0 and p < m and q < n and matrix[p][q] > matrix[i][j]) {
                maxPath = max(maxPath, dfs(matrix, m, n, p, q, dp));
            }
        }
        dp[i][j] = maxPath + 1;
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.size() == 0) return 0;
        int m = matrix.size(), n = matrix[0].size();
        int longestPath = 0;
        vector<vector<int>>dp(m, vector<int> (n));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int path = dfs(matrix, m, n , i, j, dp);
                longestPath = max(path, longestPath);
            }
        }
        return longestPath;
    }
};