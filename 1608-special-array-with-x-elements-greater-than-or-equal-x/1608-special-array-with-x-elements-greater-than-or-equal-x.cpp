class Solution {
public:
    
    int find(vector<int>& nums, int mid){
        int c = 0;
        for(auto &p: nums){
            if(p >= mid) c++;
            if(c > mid){
                return c;
            }
        }
        return c;
    }
    
    int specialArray(vector<int>& nums) {
        int start = 0;
        int end = 1001;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            int a = find(nums,mid);
            if(a == mid){
                return mid;
            }
            else if(a > mid){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
};