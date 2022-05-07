class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        vector<int> minArr(n);
        
        minArr[0] = nums[0];
        for(int i = 1; i < n; i++) {
            minArr[i] = min(nums[i], minArr[i - 1]);
        }
        stack<int> s;
        for(int j = n - 1; j >= 0; j--) {
            while(!s.empty() && s.top() <= minArr[j]) s.pop();
            if(!s.empty() && s.top() < nums[j]) {
                return true;
            }
            s.push(nums[j]);
        }
        return false;
    }
};