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
    TreeNode* bst(vector<int>& preorder,int mini,int maxi,int &i){
        if(i>=preorder.size()) return NULL;
        if(preorder[i]<mini || preorder[i]>maxi){
          return NULL;
        }
       TreeNode* root=new TreeNode(preorder[i++]);
       root->left=bst(preorder,mini,root->val,i);
       root->right=bst(preorder,root->val,maxi,i);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return bst(preorder,INT_MIN,INT_MAX,i);
    }
};