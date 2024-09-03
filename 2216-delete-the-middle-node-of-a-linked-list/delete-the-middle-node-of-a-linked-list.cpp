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
    ListNode* deleteMiddle(ListNode* head) {
        int c=0;
        ListNode*t=head;
        while(t->next!=NULL){
            c++;
            t=t->next;
        }c++;
        if(c>1){c/=2;
        c++;
        t=head;
        while(c>2){
            t=t->next;
            c--;
        }
        t->next=t->next->next;
    }else {
        return NULL;
    }
        return head;
    }
};