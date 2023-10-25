class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0; int r = 0;
        int res = 0; 
        long total = 0;
        while(r < nums.size()){
            long curr = nums[r];
            total += curr;
            while(curr * (r - l + 1) > total + k){
                total -= nums[l];
                l++;
            }
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};