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
    int height(TreeNode* root,int & ans){
        if(root==NULL) return 0;
        ans++;
        height(root->right,ans);
        height(root->left,ans);
        return ans;
    }
public:
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=0;
        return height(root,ans);
    }
};