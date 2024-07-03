class Solution {
public:
    vector<int> getLeftMaxArray(vector<int>& height, int& n){
        vector<int> result(n);

        result[0] = height[0];
        for(int i = 1; i < n; i++){
            result[i] = max(result[i-1], height[i]);
        }

        return result;
    }

    vector<int> getRightMaxArray(vector<int>& height, int& n){
        vector<int> result(n);

        result[n-1] = height[n-1];
        for(int i = n-2; i >= 0; i--){
            result[i] = max(result[i+1], height[i]);
        }

        return result;
    }

    int trap(vector<int>& height) {
        int n = height.size();
        int sum = 0;

        vector<int> leftMax = getLeftMaxArray(height, n);
        vector<int> rightMax = getRightMaxArray(height, n);

        for(int i = 0; i < n; i++){
            int h = min(leftMax[i], rightMax[i]) - height[i];
            sum += h;
        }

        return sum;
    }
};