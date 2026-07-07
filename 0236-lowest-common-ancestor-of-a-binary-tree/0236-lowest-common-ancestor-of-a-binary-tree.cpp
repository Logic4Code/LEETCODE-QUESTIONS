/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode* a(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL) return NULL;
        if(root->val==p->val || root->val==q->val) return root; 
        TreeNode* l  = a(root->left, p, q);
        TreeNode* r = a(root->right, p, q);
         if(!l && !r) return NULL;
         else if(l&&!r) return l;
         else if(!l && r) return r;
         else return root;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return a(root,p,q);
    }
};