class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        if(x < 0) return false;
        long reverse = 0;
        while(x) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x =  x/10;
        }
        return reverse == y ? true : false;
    }
};