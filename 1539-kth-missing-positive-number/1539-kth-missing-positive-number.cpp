class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0, h = arr.size();
        
        while (l < h) {
            int m = (l + h)/2;
            
            // arr[i]-i-1 = # of integers missing upto and including i-th index
			int b = arr[m] - m - 1;
            if (b < k) {
                l = m + 1;
            }
            else {
                h = m;
            }
        }
        
        // D = # of steps we should take backwards = (arr[l]-l-1)-k+1 = arr[l]-l-k
        // ans = arr[l] - D = l + k
        return l+k;
    }
};