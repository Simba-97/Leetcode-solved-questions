class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        
        while(mid <= high){
            switch(nums[mid]){
                    
                //if mid is pointing to 0    
                case 0:
                    swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                    break;
                //if mid is pointing to 1     
                case 1:
                    mid++;
                    break;
                //if mid is pointing to 2    
                case 2:
                    swap(nums[mid], nums[high]);
                    high--;
                    break;
            }
        }
    }
};