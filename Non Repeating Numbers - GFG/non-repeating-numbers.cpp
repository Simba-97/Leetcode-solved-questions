//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xxory = 0;
        for(auto a : nums) {
            xxory = xxory ^ a;
        }
        
        int rmsb = xxory & -xxory;
        int x = 0, y = 0;
        for(auto a : nums) {
            if((a & rmsb) == 0) {
                x = x ^ a;
            } else {
                y = y ^ a;
            }
        }
        vector<int> ans;
        
        if(x < y) {
            ans.push_back(x);
            ans.push_back(y);
        } else {
            ans.push_back(y);
            ans.push_back(x);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends