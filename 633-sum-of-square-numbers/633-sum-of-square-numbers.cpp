class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int low = 0;
        long long int high = sqrt(c);
        
        while(low <= high) {
            
            if(low * low + high * high == c) {
                return true;
            }
            if(low * low + high * high > c) {
                high--;
            }
            if(low * low + high * high < c) {
                low++;
            }
        }
        return false;
    }
};