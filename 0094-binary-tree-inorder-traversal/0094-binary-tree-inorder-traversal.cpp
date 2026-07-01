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
      void tra(TreeNode* node, vector<int>& ans) {
        if (!node) {
            return;
        }
        tra(node->left, ans);
        ans.push_back(node->val);
        tra(node->right, ans);
    } 
public:
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> ans;
        tra(root, ans);
        return ans;    
    }
};