class Solution {
public:
    const int dx[4] = {-1, 1, 0, 0};
    const int dy[4] = {0, 0, -1, 1};

    bool isInBounds(int i, int j, int r, int c) {
        return (i < r && j < c && i >= 0 && j >= 0);
    }

    void changeIslandType(int i, int j, int row, int col, vector<vector<int>>& grid){
        if(i >= row || j >= col || i < 0 || j < 0 || grid[i][j] == 0 || grid[i][j] == 2)
            return;
        grid[i][j] = 2;
        for(int x=0; x<4; ++x){
            int new_i=i+dx[x];
            int new_j=j+dy[x];
            changeIslandType(new_i,new_j, row, col, grid);
        }   
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>>q;
 
        int change=0;
        bool ok=false;

        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
               if(grid[i][j]){
                   changeIslandType(i,j,row,col,grid);
                   ok=true;
                   break;
               }
            }
            if(ok)break;
        }

        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
               if(grid[i][j]==2){
                   q.push({i,j});       
               }
            }
        }

        while(!q.empty()){
            ++change;
         int sz=q.size();
            while(sz--){
               auto node=q.front();
               q.pop();
               for(int x=0;x<4;++x){
                   int new_i=node.first+dx[x];
                   int new_j=node.second+dy[x];
 
                   if(isInBounds(new_i,new_j,row,col) ){
                         if( grid[new_i][new_j]==0){
                             grid[new_i][new_j]=2;
                             q.push({new_i,new_j});
                         }
                         if(grid[new_i][new_j]==1)return change-1; 
                   }  
               }     
            }
        }
 
       return 0; 
 
    }
};