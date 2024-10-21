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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||k==0) return head;
        int s=1;
        ListNode*t=head;
        while(t->next!=NULL){
            s++;
            t=t->next;
        }
        t->next=head;
        k=k%s;
        int st=s-k;
        t=head;
        while(st>1){
            t=t->next;
            st--;
        }
        head=t->next;
        t->next=NULL;
        return head;

    }
};