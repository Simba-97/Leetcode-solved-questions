class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0){
            return mergedIntervals;
        }
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> tempInterval = intervals[0];
        
        for(int i = 0; i < intervals.size(); i++){
            if(intervals[i][0] <= tempInterval[1]){
                tempInterval[1] = max(intervals[i][1], tempInterval[1]);
            } else {
                mergedIntervals.push_back(tempInterval);
                tempInterval = intervals[i];
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals; 
    }
};