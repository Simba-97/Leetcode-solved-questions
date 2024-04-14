class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size() - 1;
        int maxAns = INT_MIN;
        while(low <= high){
            maxAns = max(maxAns, (high - low) * min(height[low], height[high]));
            if(height[low] < height[high]) low++;
            else high--;
        }
        return maxAns;
    }
};