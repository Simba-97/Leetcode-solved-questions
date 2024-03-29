// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0;
        int high = INT_MAX;
        
        while(low <= high) {
            long long int mid = low + (high-low)/2;
            if (isBadVersion(mid) == true && isBadVersion(mid-1) == false){
                return mid;
            } else if (isBadVersion(mid) == true && isBadVersion(mid-1) == true){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};