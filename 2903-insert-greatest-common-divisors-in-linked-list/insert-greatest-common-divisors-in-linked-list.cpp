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
        ListNode*t=head;
        int a;
        int b;
        while(t->next!=NULL){
            a=t->val;
            b=t->next->val;
            ListNode*n=new ListNode;
            n->val=__gcd(a,b);
            n->next=t->next;
            t->next=n;
            t=t->next->next;
        }
        return head;
    }
};