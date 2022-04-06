class Solution {
public:
    int mySqrt(int x) {
        long long int low = 0;
        long long int high = INT_MAX;
        long long int mid;
        int ans = 0;
        
        while(low <= high){
            mid = low + (high-low)/2;
            
            if(mid * mid <= x) {
                ans = mid;
                low = mid + 1;
            }
            
            if(mid * mid > x){
                high = mid - 1;
            }
        }
        return ans;
    }
};