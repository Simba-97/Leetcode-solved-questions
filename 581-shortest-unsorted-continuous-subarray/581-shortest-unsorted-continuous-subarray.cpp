class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> new_nums = nums;
        sort(nums.begin(), nums.end());
        int start = new_nums.size(), end = 0;
        for(int i = 0; i < new_nums.size(); i++) {
            if (new_nums[i] != nums[i]) {
                start = min(start, i);
                end = max(end, i);
            }
        }
        return end - start >= 0 ? end - start + 1 : 0;
    }
};