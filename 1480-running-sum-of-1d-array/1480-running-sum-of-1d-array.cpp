class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // vector<int> ans;
        // int sum = 0;
        // for(int i = 0; i < nums.size(); i++) {
        //     sum = sum + nums[i];
        //     ans.push_back(sum);
        // }
        // return ans;
        
        //Constant space
        for(int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
};