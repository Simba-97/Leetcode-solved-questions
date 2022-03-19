#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int area(vector<vector<int>>& grid, int i, int j) {
        
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0 || grid[i][j] == 2) {
            return 0;
        }
        
        grid[i][j] = 2;
        
        return 1 + area(grid, i-1, j) + area(grid, i+1, j) + area(grid, i, j-1) + area(grid, i, j+1);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    int count = area(grid, i, j);
                    max_area = max(max_area, count);
                }
            }
        }
        return max_area;
    }
};