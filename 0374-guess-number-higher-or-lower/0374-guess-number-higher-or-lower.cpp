/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int ans = guess(n);
        if(ans == 0) return n;
        else if(ans == -1) return guessNumber(n-1);
        else if(ans == 1) return guessNumber(n+1);
        return ans;
    }
};