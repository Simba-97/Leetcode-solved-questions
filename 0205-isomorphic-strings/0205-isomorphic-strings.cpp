class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        
        map<char, char> mp1;
        map<char, bool> mp2;
        
        for(int i = 0; i < s.size(); i++) {
            if(mp1.count(s[i]) == true) {
                if(mp1[s[i]] != t[i]) {
                    return false;
                }
            } else {
                if(mp2.count(t[i]) == true) {
                    return false;
                } else {
                    mp1[s[i]] = t[i];
                    mp2[t[i]] = true;
                }
            }
        }
        return true;
    }
};