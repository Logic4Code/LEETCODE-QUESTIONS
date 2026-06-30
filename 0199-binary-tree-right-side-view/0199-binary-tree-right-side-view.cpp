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
    void right(TreeNode* root, vector<int> &ans, int level){
      if(root==NULL){
          return ;
      }
      if(level==ans.size()){
          ans.push_back(root->val);
      }
      right(root->right,ans,level+1);
      right(root->left,ans,level+1);
  }
public:
    vector<int> rightSideView(TreeNode* root) {
         vector<int> ans;
        if(root==NULL){
            return ans;
        }
        right(root, ans,0);
        return ans;
    }
};