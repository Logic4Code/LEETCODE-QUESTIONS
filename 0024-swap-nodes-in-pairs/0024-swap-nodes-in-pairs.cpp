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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* x=head;
        ListNode* y=head->next;
        while(x!=NULL && y!=NULL ){
        int temp=x->val;
        x->val=y->val;
        y->val=temp;
        if (y->next == NULL) break; 
        x = y->next;
        y = x->next;
        }
       return head;
    }
};