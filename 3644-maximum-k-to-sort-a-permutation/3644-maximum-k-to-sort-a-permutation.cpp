class Solution {
public:
    int sortPermutation(vector<int>& nums) {
   int n = nums.size();
    vector<pair<int, int>> pairs(n);

    for (int i = 0; i < n; ++i) {
        pairs[i] = {nums[i], i};
    }

    sort(pairs.begin(), pairs.end());

    int k = -1;

    for (int i = 0; i < n; i++) {
        if (pairs[i].second != i) {
            k &=pairs[i].first ;
        }
    }

    if(k==-1) return 0;
    return k;     
    }
};