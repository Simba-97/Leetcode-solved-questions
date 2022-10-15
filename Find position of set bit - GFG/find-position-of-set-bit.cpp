//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isPowerOfTwo(int n) {
        long long a = n;
        if(a == 0) return false;
        if(a == 1) return true;
        
        if((a & (a-1)) == 0) {
            return true;
        }
        return false;
    }
    int findPosition(int N) {
        // code here
        bool twoPower = isPowerOfTwo(N);
        
        if(twoPower) {
            return log2(N) + 1;
        } else {
            return -1;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends