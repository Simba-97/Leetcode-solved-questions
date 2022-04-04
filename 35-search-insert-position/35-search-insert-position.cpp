class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        
        if(left > right) return -1;
        while(left <= right) {
            int mid = left + (right - left)/2;
            
            if(nums[mid] == target) {
                return mid;
            }
            
            if(nums[mid] > target) {
                right = mid - 1;
            }
            if(nums[mid] < target) {
                left = mid + 1;
            }
        }
        return left;
    }
};