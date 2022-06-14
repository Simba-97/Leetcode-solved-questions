class Solution {
public:
    int dp[1001][1001];
    int lcs(string x, string y, int n, int m){
        for(int i = 0; i < n+1; i++){
            for(int j = 0; j < m+1; j++){
                if(i == 0 || j == 0) {
                    dp[i][j] = 0;
                }
            }
        }
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                if(x[i-1] == y[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }  
        return dp[n][m];
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));
        int n = text1.size();
        int m = text2.size();
        
        return lcs(text1, text2, n, m);
    }
    int minDistance(string word1, string word2) {
        int lCS = longestCommonSubsequence(word1, word2);
        int deletion = word1.size() - lCS;
        int insertion = word2.size() - lCS;
        
        return deletion + insertion;
    }
};