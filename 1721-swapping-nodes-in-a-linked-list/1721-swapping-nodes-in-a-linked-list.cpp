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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
     ListNode* x = head;
        int p = k;
        
        while (k > 1) {
           x = x->next;
           k--;
        }
        
        int n = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            n++;
            temp = temp->next; 
        }
        
        int a = x->val;
        int b = n - p + 1;
        ListNode* y = head;
        
        while (b > 1) {
           y = y->next;
           b--;
        }
        
        int m = y->val;
        x->val = m;
        y->val = a;
        
        return head;
    }
};