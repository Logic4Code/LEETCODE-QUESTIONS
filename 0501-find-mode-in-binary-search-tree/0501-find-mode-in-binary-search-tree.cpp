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
    int c = 0;
    int v= 0;
    int maxi = 0;
    vector<int> ans;
    void in(TreeNode* root) {
        if (!root) return;
        in(root->left);
        if (c == 0) {
            v = root->val;
            c = 1;
        } else if (root->val == v) {
            c++;
        } else {
            v = root->val;
            c = 1;
        }

        if (c > maxi) {
            maxi = c;
            ans = {v}; 
        } else if (c == maxi) {
            ans.push_back(v); 
        }

        in(root->right);
    }
public:
    vector<int> findMode(TreeNode* root) {
        c = 0;
        maxi = 0;
        
        in(root);
        return ans;
    }
};