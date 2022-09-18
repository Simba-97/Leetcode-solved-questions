class Solution {
public:
    void traversal(vector<vector<char>>& board,int r,int c,vector<vector<int>>& allowed){
        
        if(r<0 || r>=board.size() || c<0 || c>=board[0].size() || board[r][c]!='O' || allowed[r][c]==1){
            return;
        }
        allowed[r][c]=1;
        traversal(board,r+1,c,allowed);
        traversal(board,r-1,c,allowed);
        traversal(board,r,c+1,allowed);
        traversal(board,r,c-1,allowed);
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> allowed = vector<vector<int>>(m,vector<int>(n,0));
        for(int r=0;r<m;r++){
            if(board[r][0]=='O'){
                traversal(board,r,0,allowed);
            }
            if(board[r][n-1]=='O'){
                traversal(board,r,n-1,allowed);
            }
        }
        for(int c=0;c<n;c++){
            if(board[0][c]=='O'){
                traversal(board,0,c,allowed);
            }
            if(board[m-1][c]=='O'){
                traversal(board,m-1,c,allowed);
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(board[i][j]=='O' && allowed[i][j]!=1){
                    board[i][j]='X';
                }
            }
        }
    }
};