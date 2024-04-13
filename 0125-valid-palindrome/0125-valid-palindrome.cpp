class Solution {
public:
    bool isSpecialChar(char c) {
        // Check if the character is a special character
        return !(c >= 'a' && c <= 'z') &&
            !(c >= 'A' && c <= 'Z') &&
            !(c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        string newString = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ' && !isSpecialChar(s[i])){
                newString += s[i];
            }
        }
        
    
        transform(newString.begin(), newString.end(), newString.begin(), ::tolower); 

        
        int left = 0;
        int right = newString.size() - 1;
        if(newString.size() == 0 || newString.size() == 1) return true;
        
        while(left <= right){
            if(newString[left] != newString[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};