class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int s = intervals[0][0];
        int e = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            int l = intervals[i][0];
            int r = intervals[i][1];
           if (l <= e) {
                e = max(e, r); 
            } 
            else {
                ans.push_back({s, e}); 
                s = l;               
                e = r;
            }
        }
        ans.push_back({s, e});
        return ans;
    }
};