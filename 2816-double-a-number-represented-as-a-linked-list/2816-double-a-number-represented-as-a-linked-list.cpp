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
    int multi(ListNode* node) {
        if (node == nullptr) {
            return 0;
        }       
        int carry = multi(node->next);
        int newVal = (node->val * 2) + carry;
        node->val = newVal % 10;
        return newVal / 10;
    }
public:
    ListNode* doubleIt(ListNode* head) {
        int c = multi(head);
        if (c > 0) {
            ListNode* newHead = new ListNode(c);
            newHead->next = head;
            return newHead;
        } 
        return head;
    }
};