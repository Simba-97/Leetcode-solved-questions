class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for(auto ch: s) c ^= ch;
        for(auto ch: t) c ^= ch;
//         unordered_map<char, int> mp;
//         for(int i = 0; i < s.size(); i++) {
//             mp[s[i]]++;
//         }
        
//         for(int i = 0; i < t.size(); i++) {
//             mp[t[i]]--;
//         }
        
//         for(auto a: mp) {
//             if(a->second == 1) {
//                 c = a->first;
//             }
//         }
//         return c;
        return c;
    }
};