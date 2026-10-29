class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int, int>> ans(n);
    for (int i = 0; i < n; ++i) {
        ans[i] = {nums[i], i};
    }
    sort(ans.begin(), ans.end());
    int start = -1;
    int end = -2; 
    for (int k = 0; k < n; ++k) {
        if (ans[k].second != k) {
            if (start == -1) {
                start = k;
            }
            end = k;
        }
    }

    return end - start + 1;
    }
};