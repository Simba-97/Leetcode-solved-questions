class Solution {
public:
    string removeDuplicates(string s) {
        string s2;
        
        s2.push_back(s[0]);
        
        for(int i = 1; i < s.size(); i++){
            if ((s2.size() == 0) || (s[i] != s2[s2.size() - 1])) {
                s2.push_back(s[i]);
            }else {
                s2.pop_back();
            }
        }
        return s2;
    }
};