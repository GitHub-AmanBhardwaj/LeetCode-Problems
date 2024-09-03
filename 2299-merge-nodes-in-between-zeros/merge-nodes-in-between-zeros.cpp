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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*t=head->next;
        ListNode*ans=new ListNode;
        ListNode*at=ans;
        while(t!=NULL){
            while(t->val!=0){
                at->val+=t->val;
                t=t->next;
            }
            t=t->next;
            if(t!=NULL){
                at->next=new ListNode;
                at=at->next;
            }
        }
        return ans;
    }
};