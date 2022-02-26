class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> res;
        
        if(nums.size() < 3) return res;
        
        //moving for a
        for(int i = 0; i < nums.size()-2; i++){
                         // ignoring duplicate triplets
            if(i == 0 || (i >0 && nums[i] != nums[i-1])){
                int low = i+1; int high = nums.size()-1;
                int sum = 0 - nums[i];
                //run till lo doesn't crosses high and vice versa
                while(low < high){
                    if(nums[low] + nums[high] == sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);
                        
                        //ignoring duplicate elements for lo
                        while(low < high  && nums[low] == nums[low+1]) low++;
                        //ignoring duplicate elements for high
                        while(low < high  && nums[high] == nums[high-1]) high--;
                        
                        low++; high--;
                    }                                   //moving lo to increase the value of a
                    else if(nums[low]+nums[high] < sum) low++;
                    else high--; // otherwise
                }
            }
        }
        return res;
    }
};