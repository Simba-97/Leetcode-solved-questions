class Solution {
public:
    vector<vector<int>> subsetss;
    void helper(vector<int>& subset, int i, int k, int n) {
        if(k == subset.size() && n == 0) {
            subsetss.push_back(subset);
            return;
        }
        if(i >= 10 || (n != 0 && i > n)) 
        return;
        helper(subset, i+1, k, n);
        subset.push_back(i);
        helper(subset, i+1, k, n-i);
        subset.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> subset;
        helper(subset, 1, k, n);
        return subsetss;
    }
};