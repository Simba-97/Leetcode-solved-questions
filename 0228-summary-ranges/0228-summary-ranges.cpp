class Solution {
public:
    vector<string> ans;
    vector<string> summaryRanges(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int start = nums[i];

            while(i < nums.size() && nums[i] + 1 == nums[i+1]){
                i++;
            }

            if(start != nums[i]){
                ans.push_back(to_string(start) + "->" + to_string(nums[i]));
            } else {
                ans.push_back(to_string(start));
            }
        }
        return ans;
    }
};