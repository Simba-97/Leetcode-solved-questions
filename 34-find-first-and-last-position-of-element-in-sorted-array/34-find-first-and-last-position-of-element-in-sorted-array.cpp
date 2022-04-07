class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(findFirstIndex(nums, target));
        ans.push_back(findLastIndex(nums, target));
        return ans;
    }
    
    int findLastIndex(vector<int>& nums, int target) {
            int index = -1;
            int low = 0;
            int high = nums.size() - 1;
            
            while(low <= high) {
                int mid = low  + (high - low)/2;
                if(nums[mid] <= target){
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
                
                if(nums[mid] == target) index = mid;
            }
            
            return index;
        }
        int findFirstIndex(vector<int>& nums, int target) {
            int index = -1;
            int low = 0;
            int high = nums.size() - 1;
            
            while(low <= high) {
                int mid = low  + (high - low)/2;
                if(nums[mid] >= target){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
                
                if(nums[mid] == target) index = mid;
            }
            
            return index;
        }
};