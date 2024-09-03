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
    int pairSum(ListNode* head) {
        ListNode*t=head;
        ListNode*f=NULL;
        while(t!=NULL){
            ListNode*n=new ListNode;
            n->val=t->val;
            if(f==NULL){
                f=n;
            }else{
                n->next=f;
                f=n;
            }
            t=t->next;
        }
        t=head;
        int ans=0;
        while(t!=NULL){
            if(ans<(t->val+f->val)){
                ans=t->val+f->val;
            }
            t=t->next;
            f=f->next;
        }
        return ans;
    }
};