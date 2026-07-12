class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> a = arr;
        sort(a.begin(), a.end());
        unordered_map<int, int> b;
        int x = 1;
        for (int num : a) {
            if (!b.count(num)) {
                b[num] = x++;
            }
        }
        for (int &c : arr) {
            c = b[c];
        }
        return arr;
    }
};