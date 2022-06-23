class Solution {
public:
    bool static cmp(vector<int>&a, vector<int>& b) {
        return a[1] < b[1];
    }
    int scheduleCourse(vector<vector<int>>& C) {
    //     sort(C.begin(), C.end(), [](auto &a, auto &b) {return a[1] < b[1];});
    //     priority_queue<int> pq;
    //     int total = 0;
    //     for (auto &course : C) {
    //         int dur = course[0], end = course[1];
    //         if (dur + total <= end) 
    //             total += dur, pq.push(dur);
    //         else if (pq.size() && pq.top() > dur)
    //             total += dur - pq.top(), pq.pop(), pq.push(dur);
    //     }
    //     return pq.size();
        sort(C.begin(), C.end(), cmp);
        if(C.size() <= 0) return 0;
        
        priority_queue<int> q;
        int sum = 0;
        for(auto i : C) {
            sum += i[0];
            q.push(i[0]);
            if(sum > i[1]) {
                sum -= q.top();
                q.pop();
            }
        }
        return q.size();
    }
};