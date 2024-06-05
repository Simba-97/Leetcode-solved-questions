class Solution {
public:
    vector<int> result;
    vector<int> countBits(int n) {
        for(int i = 0; i < n+1; i++){
            result.push_back(__builtin_popcount(i));
        }
        return result;
    }
    
};