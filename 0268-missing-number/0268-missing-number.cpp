class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int maxNum = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size();i++) {
            maxNum = max(maxNum, nums[i]);
        }
        
        for(int i = 0; i < maxNum+1; i++) {
            if(nums[i] != i) {
                return i;
            }
        }
        return nums.size();
    }
};