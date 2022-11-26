class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n));
        int len = 0;
        string ans;
        for(int g = 0; g < n; g++) {
            for(int i = 0, j = g; j < n; i++, j++) {
                if(g == 0) {
                    dp[i][j] = true;
                } else if (g == 1) {
                    if(s[i] == s[j]) {
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = false;
                    }
                } else {
                    if(s[i] == s[j] && dp[i+1][j-1] == true) {
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = false;
                    }
                }
                
                if(dp[i][j]) {
                    len = g + 1;
                    ans = s.substr(i, len);
                }
            }
            
        }
        return ans;
    }
};