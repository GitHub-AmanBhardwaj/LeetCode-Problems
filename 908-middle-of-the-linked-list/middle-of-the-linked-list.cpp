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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return head;
        }
        int c=0;
        ListNode*t=head;
        while(t!=NULL){
            t=t->next;
            ++c;
        }
        c/=2;
        ++c;
        while(c>1){
            c--;
            head=head->next;
        }
        return head;
    }
};