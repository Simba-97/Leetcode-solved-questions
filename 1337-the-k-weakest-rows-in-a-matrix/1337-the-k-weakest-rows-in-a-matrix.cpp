class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> A;
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i < n; i++){
            int a = 0;
            for(int j = 0; j < m; j++)
                a += mat[i][j];
            A.push_back({a, i});
        }
        sort(A.begin(), A.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            return a.first == b.first ? a.second < b.second : a.first < b.first;
        });
        vector<int> result(k);
        for(int i = 0; i < k; i++) result[i] = A[i].second;
        return result;
    }
};