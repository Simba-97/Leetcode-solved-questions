class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // long long n = nums.size();
        // vector<int> temp(n);
        // for(int i = 1; i < n; i++) {
        //     temp[i-k] = nums[i];
        // }
        // temp[n-k] = nums[0];
        int a = k % nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+a);
        reverse(nums.begin()+a,nums.end());
    }
};