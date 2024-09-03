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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*t=head;
        int c=0;
        while(t!=NULL){
            t=t->next;
            c++;
        }
        t=head;
        int tk=k;
        while(tk>1){
            t=t->next;
            tk--;
        }
        ListNode*te=head;
        c-=k;
        while(c>0){
            te=te->next;
            c--;
        }
        cout<<t->val<<endl;
        int a=t->val;
        t->val=te->val;
        te->val=a;
        cout<<t->val<<endl;
        
        return head;
    }
};