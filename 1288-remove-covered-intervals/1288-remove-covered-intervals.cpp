class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
      if (intervals.empty()) return 0;
       sort(intervals.begin(), intervals.end());
        int count = 1; 
        int s = intervals[0][0];
        int e = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            int l = intervals[i][0];
            int r = intervals[i][1];
            if (l >= s && r <= e) {
                continue; 
            }
            else if (l == s && r > e) {
                e = r; 
            }
            else {
                count++;
                s = l;
                e = r;
            }
        }
        return count;  
    }
};