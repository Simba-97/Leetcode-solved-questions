class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max_sum = nums[0];
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(sum > max_sum) max_sum = sum;
            if(sum < 0 )sum = 0;
        }
        return max_sum;
        //int best = INT_MIN, sum = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     sum = max(nums[i], sum + nums[i]);
        //     best = max(best, sum);
        // }
        // return best;
    }
};