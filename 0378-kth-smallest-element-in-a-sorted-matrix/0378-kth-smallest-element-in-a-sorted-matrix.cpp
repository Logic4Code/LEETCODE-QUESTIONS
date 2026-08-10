class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
      int n = matrix.size();
        priority_queue<
            vector<int>,
            vector<vector<int>>,
            greater<vector<int>>
        > minHeap;

        for (int i = 0; i < n; i++) {
            minHeap.push({matrix[i][0], i, 0});
        }

        int ans = 0;

        while (k--) {

            auto curr = minHeap.top();
            minHeap.pop();

            ans = curr[0];
            int row = curr[1];
            int col = curr[2];

            if (col + 1 < n) {
                minHeap.push({matrix[row][col + 1], row, col + 1});
            }
        }
        return ans;  
    }
};