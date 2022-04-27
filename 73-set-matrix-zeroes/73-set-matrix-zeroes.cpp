class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //implementation with extra space of O(H + W)
        // const int H = matrix.size();
        // const int W = matrix[0].size();
        // vector<bool> row_zero(H);
        // vector<bool> col_zero(W);
        // for(int row = 0; row < H; ++row) {
        //     for(int col = 0; col < W; ++col) {
        //         if(matrix[row][col] == 0){
        //             row_zero[row] = true;
        //             col_zero[col] = true;
        //         }
        //     }
        // }
        // for(int row = 0; row < H; ++row) {
        //     for(int col = 0; col < W; ++col) {
        //         if(row_zero[row] || col_zero[col]) {
        //             matrix[row][col] = 0;
        //         }
        //     }
        // }
        const int H = matrix.size();
        const int W = matrix[0].size();
        
        bool first_row_zero = false;
        for(int col = 0; col < W; ++col) {
            if(matrix[0][col] == 0) {
                first_row_zero = true;
            }
        }
        
        for(int row = 0; row < H; ++row) {
            for(int col = 0; col < W; ++col) {
                if(matrix[row][col] == 0) {
                    matrix[0][col] = 0;
                }
            }
        }
        
        for(int row = 1; row < H; ++row) {
            bool contains_zero = false;
            for(int col = 0; col < W; ++col) {
                if(matrix[row][col] == 0) {
                    contains_zero = true;
                    break;
                }
            }
            for(int col = 0; col < W; ++col) {
                if(contains_zero || matrix[0][col] == 0) {
                    matrix[row][col] = 0;
                }
            }
        }
        if(first_row_zero) {
            for(int col = 0; col < W; ++col) {
                matrix[0][col] = 0;
            }
        }
    }
};