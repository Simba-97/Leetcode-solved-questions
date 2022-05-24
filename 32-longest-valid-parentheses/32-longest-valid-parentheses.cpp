class Solution {
public:
    int longestValidParentheses(string s) {
        // vector<int> stack = {-1};
        // int ans = 0;
        // for (int i = 0; i < s.size(); i++)
        //     if (s[i] == '(') stack.push_back(i);
        //     else if (stack.size() == 1) stack[0] = i;
        //     else {
        //         stack.pop_back();
        //         ans = max(ans, i - stack.back());
        //     }
        // return ans;
        int open = 0, close = 0, maxlength = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                open++;
            } else {
                close++;
            }
            if(close == open) {
                maxlength = max(maxlength, 2*open);
            } else if(close > open) {
                open = 0, close = 0;
            }
        }
        open = 0, close = 0;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == '(') {
                open++;
            } else {
                close++;
            }
            if(close == open) {
                maxlength = max(maxlength, 2*open);
            } else if(open > close) {
                open = 0, close = 0;
            }
        }
        return maxlength;
    }
};