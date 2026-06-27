/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    pair<int, int> solve(TreeNode* root) {
        if (root == nullptr) {
            return {0, 0};
        }
       pair<int, int> left = solve(root->left);
        pair<int, int> right = solve(root->right);
        int ans = max({left.first,right.first,left.second + right.second});
        int ans2 = max(left.second, right.second) + 1;
        return {ans, ans2};
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return solve(root).first;
    }
};