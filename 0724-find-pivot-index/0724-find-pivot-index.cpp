class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        
        int leftSum = 0, rightSum = sum;
        for(int i = 0; i < nums.size(); i++) {
            leftSum += nums[i];
            if(leftSum == rightSum) {
                return i;
            }
            rightSum -= nums[i];
        }
        return -1;
    }
};