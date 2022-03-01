class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        
        int n = 0; int m = matrix[0].size()-1;
        
        while(n < matrix.size() && m >= 0) {
            if(matrix[n][m] == target) return true;
            else if(matrix[n][m] < target) n++;
            else m--;
        }
        return false;
    }
};