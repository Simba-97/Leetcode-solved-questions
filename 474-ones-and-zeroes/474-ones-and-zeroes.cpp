class Solution {
public:
    int dp[101][101][601];
    int helper(vector<string>& strs, int m, int n, int i) {
        if(i >= strs.size() or n < 0 or m < 0) {
            return 0;
        }
        
        if(dp[m][n][i] != -1)
            return dp[m][n][i];
        
        int zeroes = count(strs[i].begin(), strs[i].end(), '0');
        int ones = count(strs[i].begin(), strs[i].end(), '1');
        
        if(m - zeroes >= 0 and n - ones >= 0) {
            return dp[m][n][i] = max(1 + helper(strs, m - zeroes, n - ones, i+1), helper(strs, m, n, i+1));
        } else {
            return dp[m][n][i] = helper(strs, m, n, i+1);
        }
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp, -1, sizeof(dp));
        
        return helper(strs, m, n, 0);
    }
};