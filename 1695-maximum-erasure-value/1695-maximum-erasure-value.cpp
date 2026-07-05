class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
    unordered_set<int> visited;
    int ans = 0;
    int s = 0;
    int l = 0;
    for (int r = 0; r < nums.size(); ++r) {
        while (visited.count(nums[r])) { 
            visited.erase(nums[l]);
            s -= nums[l];
            l++;
        }
        visited.insert(nums[r]);
        s += nums[r];
        if (s > ans) {
            ans = s;
        }
    }
    return ans; 
    }
};