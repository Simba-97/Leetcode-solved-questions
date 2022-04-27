class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        const int H = matrix.size();
        const int W = matrix[0].size();
        vector<bool> row_zero(H);
        vector<bool> col_zero(W);
        for(int row = 0; row < H; ++row) {
            for(int col = 0; col < W; ++col) {
                if(matrix[row][col] == 0){
                    row_zero[row] = true;
                    col_zero[col] = true;
                }
            }
        }
        for(int row = 0; row < H; ++row) {
            for(int col = 0; col < W; ++col) {
                if(row_zero[row] || col_zero[col]) {
                    matrix[row][col] = 0;
                }
            }
        }
    }
};