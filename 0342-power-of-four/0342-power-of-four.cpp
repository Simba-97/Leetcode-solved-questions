class Solution {
public:
    bool isPowerOfFour(int n) {
        int num = n;
        int count = 0;
        if(n < 1) return false;
        while(num > 1) {
            num >>= 2;
            count += 2;
        }
    
        return (num << count) == n;
    }
};