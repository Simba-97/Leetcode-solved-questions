class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        // char nmap[10001]{0};
        // int total = 0, best = 0;
        // for (int left = 0, right = 0; right < nums.size(); right++) {
        //     nmap[nums[right]]++, total += nums[right];
        //     while (nmap[nums[right]] > 1)
        //         nmap[nums[left]]--, total -= nums[left++];
        //     best = max(best, total);
        // }
        // return best;
        int n = nums.size();
        vector<int> prefix_array(n+1, 0);
        for(int i = 0; i < n; i++) {
            prefix_array[i+1] = prefix_array[i] + nums[i];
        }
        int s = 0;
        vector<int> M(10001, -1);
        int ans = 0;
        for(int i = 0; i < n; i++) {
            s = max(s, M[nums[i]] + 1);
            ans = max(ans, prefix_array[i+1] - prefix_array[s]);
            M[nums[i]] = i;
        }
        return ans;
    }
};