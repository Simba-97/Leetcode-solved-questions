class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //using map
        // unordered_map<int, int> mp;
        // for(int i = 0; i < nums.size(); i++){
        //     if(mp.find(target-nums[i]) != mp.end()){
        //         vector<int> ans = {i+1, mp[target-nums[i]] + 1};
        //         sort(ans.begin(), ans.end());
        //         return ans;
        //     }
        //     mp[nums[i]] = i;
        // }
        // return {-1, -1};
        
        //using binary search
        int left = 0, right = nums.size() - 1;
        vector<int> ans;
        while(left <= right){
            int sum = nums[left] + nums[right];
            
            if(sum == target){
                ans.push_back(left + 1);
                ans.push_back(right + 1);
                return ans;
            } else if(sum > target){
                right--;
            } else {
                left++;
            }
        }
        return {-1, -1};
    }
};