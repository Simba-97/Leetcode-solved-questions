class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // k = k-1;
        // priority_queue<int> minHeap;
        // for(auto i : nums){
        //     minHeap.push(i);
        // }
        // while(k--){
        //     minHeap.pop();
        // }
        // return minHeap.top();
        k = k-1;
        sort(nums.begin(), nums.end());
        //int n = nums.size();
        while(k > 0) {
            nums.pop_back();
            k--;
        }
        return nums[nums.size() - 1];
    }
};