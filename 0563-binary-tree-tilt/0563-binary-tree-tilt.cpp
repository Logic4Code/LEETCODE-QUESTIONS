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
    int solve(TreeNode* root, int& s) {
        if (!root)
            return 0;

        int left = solve(root->left, s);
        int right = solve(root->right, s);
        s += abs(left - right);

        return left + right + root->val;
    }
public:
    int findTilt(TreeNode* root) {
        int s = 0;
        solve(root, s);
        return s; 
    }
};