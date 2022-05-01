class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string res1 = "", res2 = "";
        int i = 0, j = 0;
        
        while(S[i] != '\0') {
            if(S[i] >= 'a' && S[i] <= 'z') res1 += S[i];
            else if(!res1.empty()) res1.pop_back();
            i++;
        }
        while(T[j] != '\0') {
            if(T[j] >= 'a' && T[j] <= 'z') res2 += T[j];
            else if(!res2.empty()) res2.pop_back();
            j++;
        }
        
        if(res1.compare(res2) == 0) {
            return true;
        } 
        return false;
    }
};