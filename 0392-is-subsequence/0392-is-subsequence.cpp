class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_pointer = 0;
        int t_pointer = 0;
        
        if(s.size() == 0) return true;
        
        while(t_pointer < t.size()) {
            if(t[t_pointer] == s[s_pointer]){
                s_pointer++;
            }
            
            if(s_pointer == s.size()) return true;
            
            t_pointer++;
        }
        return false;
    }
};