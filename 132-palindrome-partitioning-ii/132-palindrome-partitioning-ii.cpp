class Solution {
public:

    int dp[2001][2001];

    bool isPalindrome(string &s, int i, int j){
        if(i >= j)return true;
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int solve(string &s, int i, int j) {
        if(i >= j) return 0;
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(isPalindrome(s,i,j)) {
            return 0;
        }
        int ans = INT_MAX;
        for(int k = i; k <= j-1; k++) {
            if(isPalindrome(s, i, k)) {
                int left, right;
                if(dp[i][k] != -1){
                    left = dp[i][k];
                } else {
                    left = solve(s, i, k);
                    dp[i][k] = left;
                }
                if(dp[k+1][j] != -1){
                    right = dp[k+1][j];
                } else {
                    right = solve(s, k+1, j);
                    dp[k+1][j] = right;
                }
                int temp = 1 + left + right;
                ans = min(temp, ans);
            }
        }
        return dp[i][j] = ans;
    }
    int minCut(string s) {
        int i = 0;
        int j = s.size()-1;
        memset(dp, -1, sizeof(dp));
        return solve(s, i, j);
    }
};