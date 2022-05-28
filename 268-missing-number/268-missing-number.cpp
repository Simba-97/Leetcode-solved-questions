class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans;
        for(int i = 0; i < nums.size();){
            if(i == nums[i] || nums[i] >= nums.size()){
                i++;
                continue;
            }
            else{
                swap(nums[i], nums[nums[i]]);
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(i != nums[i]){
                ans = i;
            }
        }
        return ans;
    }
};