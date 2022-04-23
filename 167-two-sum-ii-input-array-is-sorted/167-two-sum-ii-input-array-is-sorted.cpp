class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        vector<int> ans;
        
        while(low < high) {
            int sum = nums[low] + nums[high];
            
            if(sum  == target) {
                ans.push_back(low + 1);
                ans.push_back(high + 1);
                return ans;
            }
            if(sum > target) {
                high--;
            }
            if(sum < target) {
                low++;
            }
        }
        return ans;
    }
};