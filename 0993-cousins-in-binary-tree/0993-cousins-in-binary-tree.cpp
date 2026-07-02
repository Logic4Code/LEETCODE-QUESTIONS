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
    int xd, yd, xp, yp;

    void h(TreeNode* root, int x, int y, int dep, int v){
    if(root==NULL) return;
    if(root->val==x){
        xd=dep;
        xp=v;
        return;
    }
    if(root->val==y){
        yd=dep;
        yp=v;
        return;
    }
    h(root->left, x, y, dep+1, root->val);
    h(root->right, x, y, dep+1, root->val);
}
public:
    bool isCousins(TreeNode* root, int x, int y) {
    if(root->val==x || root->val==y) return false;
    h(root, x, y, 0, 0);
    
    if(xd==yd && xp!=yp) return true;
    return false;  
    }
};