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
        if(head==NULL)return NULL;
        ListNode*t=head;
        while(t!=NULL&&t->next!=NULL){
            int a=t->val;
            t->val=t->next->val;
            t->next->val=a;
            t=t->next->next;
        }
        return head;        
    }
};