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
    void ans(TreeNode* root, int k, std::priority_queue<int>& maxHeap) {
        if (root == nullptr) return;
        maxHeap.push(root->val);
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
        ans(root->left, k, maxHeap);
        ans(root->right, k, maxHeap);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> pq;
        ans(root, k, pq);
        return pq.top();
    }
};