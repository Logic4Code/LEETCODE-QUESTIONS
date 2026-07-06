/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
     int cnt(ListNode* head){
        int c=0;
        ListNode* slow=head;
        while(slow!=nullptr){
            slow = slow->next;
            c++;
        }
        return c;
     }
     TreeNode* bst(ListNode*& head,int n){
         if(n<=0 || head==nullptr) return NULL;
        TreeNode* left=bst(head,n/2);
         TreeNode* root=new TreeNode(head->val);;
         root->left=left;
         head=head->next;
         root->right=bst(head,n-n/2-1);
         return root;
     }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return bst(head,cnt(head));
    }
};