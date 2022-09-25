class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int ma = ans, mi = ans;
        
        if(nums.size() == 1) return nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < 0) {
                swap(ma, mi);
            }
            ma = max(nums[i], ma* nums[i]);
            mi = min(nums[i], mi* nums[i]);
            ans = max(ans, ma);
        }
        
        return ans;
        
    }
};