class Solution {
public:
    vector<vector<int>> result;

    void solve(int sum, int target, int index, vector<int>& temp,
               vector<int>& candidates) {
        if (sum > target) {
            return;
        }
        if (index == candidates.size()) {
            if (sum == target) {
                result.push_back(temp);
            }
            return;
        }

        temp.push_back(candidates[index]);
        solve(sum + candidates[index], target, index, temp, candidates);
        temp.pop_back();
        solve(sum, target, index + 1, temp, candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum = 0;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(sum, target, 0, temp, candidates);
        return result;
    }
};