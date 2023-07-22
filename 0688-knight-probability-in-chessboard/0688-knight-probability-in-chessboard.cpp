class Solution {
public:
    unordered_map<string, double> mp;
    vector<pair<int, int>> directions = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
    double solve(int r, int c, int k, int size){
        if(r < 0 || r >= size || c < 0 || c >= size){
            return 0;
        }   
        
        if (k == 0) {
            return 1;
        }
        
        string key = to_string(k) + "-" + to_string(r) + "-" + to_string(c);
        
        if(mp.find(key) != mp.end()){
            return mp[key];
        }
        
        double ans = 0;
        for(auto &dir: directions) {
            int new_row = r + dir.first;
            int new_col = c + dir.second;
            
            ans += (double) solve(new_row, new_col, k-1, size);
        }
        
        return mp[key] = (double)ans/8.0;
    }
    double knightProbability(int n, int k, int row, int column) {
        return solve(row, column, k, n);
    }
};