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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head; 
        }
        ListNode*t=head;
        int c=0;
        while(t!=NULL){
            c++;
            t=t->next;
        }
        if(c==1){
            return NULL;
        }else if(n==c){
            head=head->next;
            return head;
        }
        c-=n;
        t=head;
        while(c>1){
            t=t->next;
            c--;
        }
        t->next=t->next->next;
        return head;
        
    }
};