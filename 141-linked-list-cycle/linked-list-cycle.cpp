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
    bool hasCycle(ListNode *head) {
        while(head!=NULL){
            if(head->val==2147483647){
                return 1;
            }
            head->val=2147483647;
            head=head->next;

        }
        return 0;
        
    }
};