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
    void inorder(TreeNode* root,vector<int> &inorde){
    if(root==NULL){
        return ;
    }
    inorder(root->left,inorde);
    inorde.push_back(root->val);
    inorder(root->right,inorde);
}
     TreeNode* bst(int s,int e,vector<int>& nums){
        if(s>e) return NULL;
        int m=s+(e-s)/2;
        TreeNode* root=new TreeNode(nums[m]);
        root->left=bst(s,m-1,nums);
        root->right=bst(m+1,e,nums);
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
    vector<int> inorde;
    inorder(root,inorde);
    return bst(0, inorde.size()-1,inorde);  
    }
};