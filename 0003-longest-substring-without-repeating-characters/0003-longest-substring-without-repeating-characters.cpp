class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int i = 0, j = 0, mx = 0;
        // unordered_map<char, int> mp;
        // while(j < s.size()) {
        //     mp[s[j]]++;
        //     if(mp.size() == j - i + 1) {
        //         mx = max(mx, j - i + 1);
        //         j++;
        //     } else if (mp.size() < j - i + 1) {
        //         while(mp.size() < j - i + 1) {
        //             mp[s[i]]--;
        //             if(mp[s[i]] == 0) {
        //                 mp.erase(s[i]);
        //                 i++;
        //             }
        //         }
        //         j++;
        //     }
        // }
        // return mx;
//         vector<int> mp(127, -1);
//         int pos = -1, maxlen = 0;
        
//         for(int i = 0; i < s.size(); i++) {
//             int ch = s[i];
//             pos = max(pos, mp[ch]);
//             maxlen = max(maxlen, i - pos);
//             mp[ch] = i;
//         }
//         return maxlen;
        vector<int> mp(127, -1);
        int left = 0, right = 0;
        int len = 0;
        int n = s.size();
        while(right < n) {
            if(mp[s[right]] != -1) left = max(mp[s[right]] + 1, left);
            
            mp[s[right]] = right;
            
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};