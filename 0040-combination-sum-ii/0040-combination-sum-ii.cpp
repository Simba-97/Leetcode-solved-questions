class Solution {
public:
    vector<vector<int>> result;
    void solve(int index, int currSum, vector<int>& candidates, int target, vector<int>& temp){
        if(currSum > target){
            return;
        }

        if(index == candidates.size()){
            if(currSum == target){
                result.push_back(temp);
            }
            return;
        }

        temp.push_back(candidates[index]);
        solve(index+1, currSum + candidates[index], candidates, target, temp);
        temp.pop_back();
        while(index + 1 < candidates.size() && candidates[index] == candidates[index + 1]) index++;
        solve(index+1, currSum, candidates, target, temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(0, 0, candidates, target, temp);
        return result;
    }
};