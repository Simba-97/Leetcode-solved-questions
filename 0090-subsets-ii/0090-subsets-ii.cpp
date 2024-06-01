class Solution {
public:
    set<vector<int>> result;
    void solve(int i, vector<int>& nums, vector<int> temp){
        if(i >= nums.size()){
            sort(temp.begin(), temp.end());
            result.insert(temp);
            return;
        }
        
        temp.push_back(nums[i]);
        solve(i+1, nums, temp);
        temp.pop_back();
        solve(i+1, nums, temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        solve(0, nums, temp);
        
        vector<vector<int>> ans;
        for(auto &a: result){
            ans.push_back(a);
        }
        return ans;
    }
};