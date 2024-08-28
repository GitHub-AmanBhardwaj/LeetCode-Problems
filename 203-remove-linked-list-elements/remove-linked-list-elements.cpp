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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode*t=head;
        while(t!=NULL&&t->next!=NULL){
            if(t->next->val==val){
                t->next=t->next->next;
            }
            if(t->next==NULL){
                t=t->next;
            }else if(t->next->val!=val){
                t=t->next;
            }
        }
        if(head!=NULL&&head->val==val){
            head=head->next;
        }
        return head;
    }
};