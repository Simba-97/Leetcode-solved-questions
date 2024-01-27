class Solution {
public:
    bool isPalindrome(string s) {
        int n = size(s);
        
        if(n == 1) return true;
        
        string newString;
        for(int i = 0; i < n; i++){
            if(iswalnum(s[i])){
                newString += s[i];
            }
        }
               
        transform(newString.begin(), newString.end(), newString.begin(), ::tolower); 
               
        int i=0,j=size(newString)-1;
        
        while(i < j) {
            if(newString[i] != newString[j]) return false;
            i++,j--;
        }
        return true;
    }
};