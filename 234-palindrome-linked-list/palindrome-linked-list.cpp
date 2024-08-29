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
    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode*t=head;
        while(t!=NULL){
            s.push(t->val);
            t=t->next;
        }
        t=head;
        while(t!=NULL){
            if(s.top()==t->val){
                s.pop();
                t=t->next;
            }else{
                return 0;
            }
        }
        return 1;
    }
};