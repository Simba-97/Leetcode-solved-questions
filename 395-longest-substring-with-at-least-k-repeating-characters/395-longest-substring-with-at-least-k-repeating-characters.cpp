class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        if(n == 0 or n < k) return 0;
        if(k <= 1) return n;
        
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        int l = 0;
        while(l < n && mp[s[l]] >= k) l++;
        if(l >= n-1) return l;

        int ls1 = longestSubstring(s.substr(0, l), k);
        while(l < n and mp[s[l]] < k) l++;
        int ls2 = (l < n) ? longestSubstring(s.substr(l), k) : 0;
        
        return max(ls1, ls2);
    }
};