class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i = n/2; i >= 1; i--){
            if(n % i == 0) {
                int num_repeats = n/i;
                string substring = s.substr(0, i);
                string new_string;
                for(int j = 0; j < num_repeats; j++){
                    new_string.append(substring);
                }
                
                if(new_string == s) return true;
            }
        }
        
        return false;
        
    }
};