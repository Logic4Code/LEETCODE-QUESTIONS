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
    
   void pa(TreeNode* node, string path, vector<string>& result) {
        if (node==NULL) return;
        path += to_string(node->val);
        pa(node->left, path + "->", result);
        pa(node->right, path + "->", result);
        if (!node->left && !node->right)  result.push_back(path);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    pa(root,"",ans);
       return ans;
    }
};