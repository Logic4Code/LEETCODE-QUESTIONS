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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* a=head;
        ListNode* b=head->next;
        while(b!=nullptr){
        int g=gcd(a->val,b->val);
        ListNode* c = new ListNode(g);
        a->next=c;
        c->next=b;
        a=a->next->next;
        b=b->next;
        }
        return head;
    }
};