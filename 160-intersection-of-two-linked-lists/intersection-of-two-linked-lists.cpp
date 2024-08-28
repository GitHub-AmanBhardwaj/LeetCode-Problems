/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*ta=headA;
        ListNode*tb=headB;
        while(ta!=NULL){
            tb=headB;
            while(tb!=NULL){
                if(ta==tb){
                    return ta;
                }
                tb=tb->next;
            }
            ta=ta->next;
        }
        return NULL;
    }
};