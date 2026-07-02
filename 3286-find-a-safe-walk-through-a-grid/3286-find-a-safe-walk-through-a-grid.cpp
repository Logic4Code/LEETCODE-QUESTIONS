class Solution {
    bool d(int r, int c, int health, vector<vector<int>>& grid,vector<vector<int>>& visited) {
        int m = grid.size();
        int n = grid[0].size();

        if (r < 0 || r >= m || c < 0 || c >= n) {
            return false;
        }

        if (grid[r][c] == 1) {
            health--;
        }

        if (health <= 0) {
            return false;
        }

        if (r == m - 1 && c == n - 1) {
            return true;
        }
        if (visited[r][c] >= health) {
            return false;
        }

        visited[r][c] = health ;

        if (d(r + 1, c, health, grid, visited) ||
            d(r, c + 1, health, grid, visited) ||
            d(r - 1, c, health, grid, visited) ||
            d(r, c - 1, health, grid, visited)) {
            return true;
        }

        return false;
    }
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> visited(m, vector<int>(n, -1));
        
        return d(0, 0, health, grid, visited);
    }
};