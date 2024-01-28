class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor = image[sr][sc];
        if(image[sr][sc] == color) return image;
        fill(image, sr, sc, iniColor, color);
        return image;
    }
    
    void fill(vector<vector<int>>& image, int sr, int sc, int iniColor, int color){
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != iniColor){
            return;
        }
        
        image[sr][sc] = color;
        fill(image, sr+1, sc, iniColor, color);
        fill(image, sr-1, sc, iniColor, color);
        fill(image, sr, sc+1, iniColor, color);
        fill(image, sr, sc-1, iniColor, color);
    }
};