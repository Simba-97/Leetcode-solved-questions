class Solution {
public:
    bool search(int i, int j, int n, int m, vector<vector<char>>& board, string word, int k) {
        if(k == word.size()) return true;
        
        if(i < 0 || j < 0 || i == n || j == m || board[i][j] != word[k]) return false;
                
        char ch = board[i][j];
        board[i][j] = '#';
        bool op1 = search(i + 1, j, n, m, board, word, k + 1);
        bool op2 = search(i - 1, j, n, m, board, word, k + 1);
        bool op3 = search(i, j + 1, n, m, board, word, k + 1);
        bool op4 = search(i, j - 1, n, m, board, word, k + 1);
        board[i][j] = ch;
        
        
        return op1 || op2 || op3 || op4;
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        for(int i = 0; i < n; i++) {
            for(int j =  0; j < m; j++) {
                if(board[i][j] == word[0]) {
                    if(search(i, j, n, m, board, word, 0)) return true;
                }
            }
        }
        return false;
    
    }
    
//     bool search(int i, int j, int index, vector<vector<char>>& board, string& word) {
//         int m = board.size(), n = board[0].size();
        
//         if(index == word.size()) return true;
//         if(i < 0 or j < 0 or i >= m or j >= n) return false;
        
//         bool all = false;
//         if(word[index] == board[i][j]) {
//             char temp = word[index];
//             board[i][j] = '#';
//             all = search(i+1, j, index+1, board, word) or search(i-1, j, index+1, board, word) or 
//                 search(i, j+1, index+1, board, word) or search(i, j-1, index+1, board, word);
            
//             board[i][j] = temp;
//         }
        
//         return all;
//     }
    
};