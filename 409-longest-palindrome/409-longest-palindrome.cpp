class Solution {
public:
    int longestPalindrome(string s) {
        int palindromeLengthCount = 0;
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        
        for(auto a : mp) {
            palindromeLengthCount += a.second / 2 * 2;
            
            if(palindromeLengthCount % 2 == 0 && a.second % 2 != 0) {
                palindromeLengthCount += 1;
            }
            
        }
        
        return palindromeLengthCount;
    }
};