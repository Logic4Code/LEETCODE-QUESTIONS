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
        int ans=0;
    pair<int, int> x(TreeNode* root) {
        if (root == nullptr) {
            return make_pair(0, 0);
        }
        pair<int, int> leftSubtree = x(root->left);
        pair<int, int> rightSubtree = x(root->right);

        int leftSum = leftSubtree.first;
        int leftCount = leftSubtree.second;

        int rightSum = rightSubtree.first;
        int rightCount = rightSubtree.second;

        int totalSum = leftSum + rightSum + root->val;
        int totalCount = leftCount + rightCount + 1;

        if (root->val == totalSum / totalCount) {
            ans++;
        }
        return make_pair(totalSum, totalCount);
    }
public:
    int averageOfSubtree(TreeNode* root) {
       x(root);
       return ans;
    }
};