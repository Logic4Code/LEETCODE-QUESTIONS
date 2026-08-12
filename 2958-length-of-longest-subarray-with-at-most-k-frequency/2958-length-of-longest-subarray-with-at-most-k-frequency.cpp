class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
     unordered_map<int, int> f;
        int i = 0;
        int l = 0;

        for (int j = 0; j < nums.size(); ++j) {
            f[nums[j]]++;
            while (f[nums[j]] > k) {
                f[nums[i]]--;
                i++;
            }
            l = max(l, j - i + 1);
        }

        return l;
    }
};