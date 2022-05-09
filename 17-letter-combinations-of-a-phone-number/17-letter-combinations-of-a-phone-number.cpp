class Solution {
public:
    vector<string> helper(string &digits, int i, map<int, string> &mp) {
        if(i == digits.size()) return {""};
        vector<string> temp = helper(digits, i + 1, mp);
        vector<string> ans;
        for(auto a : mp[digits[i] - '0']) {
            for(auto x : temp) {
                ans.push_back(a + x);
            }
        }
        return ans;
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        map<int, string> mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz"; 
        return helper(digits, 0, mp);
    }
};