class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int dir = 0;

        /*
        dir = 0; left to right
        dir = 1; top to bottom
        dir = 2; right to left;
        dir = 3; bottom to top
        */

        vector<int> result;

        int top = 0;
        int bottom = m-1;

        int left = 0;
        int right = n-1;

        while(top <= bottom && left <= right){
            if(dir == 0){
                for(int i = left; i <= right; i++){
                    result.push_back(matrix[top][i]);
                }
                top++;
            }
            if(dir == 1){
                for(int i = top; i <= bottom; i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
            }
            if(dir == 2){
                for(int i = right; i >= left; i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(dir == 3){
                for(int i = bottom; i >= top; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }

            dir ++;
            if(dir == 4){ 
                dir = 0;
            }
        }

        return result;
    }
};