class Solution {
public:
    int search(vector<int>& nums, int target) {
        return helper(nums, 0, nums.size() - 1, target);
    }
    
    int helper(vector<int>& nums, int low, int high, int& target) {
        if(low > high)   return -1;
        if(nums[low] < nums[high]) {                       //if this condition is true we know that the array has not been rotated
            return BSThelp(nums, low, high, target);            //and we can perform a simple binary search on this array
        }
        int mid = low + (high - low) / 2;
        if(nums[mid] == target)   return mid;
        int left = helper(nums, low, mid - 1, target);                      
        int right = helper(nums, mid + 1, high, target);
        return max(left, right);
    }
    int BSThelp(vector<int>& nums, int low, int high, int& target) {
        while(low <= high) {
            int mid = low + (high - low)/2;
            if(nums[mid] == target)   return mid;  //Normal binary search code
            if(nums[mid] < target)    low = mid + 1;
            if(nums[mid] > target)    high = mid - 1;
        }
        return -1;
    }
};