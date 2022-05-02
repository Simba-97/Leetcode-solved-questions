class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
//         vector<int> ans;
        
//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] % 2 == 0) {
//                 ans.insert(ans.begin(), nums[i]);
//             } else {
//                 ans.push_back(nums[i]);
//             }
//         }
//         return ans;
        //optimal solution
        int i = 0;
        int j = nums.size() - 1;
        
        while(i < j) {
            if(nums[i] % 2 > nums[j] % 2) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            
            if(nums[i] % 2 == 0) i++;
            if(nums[j] % 2 == 1) j--;
        }
        return nums;
    }
};