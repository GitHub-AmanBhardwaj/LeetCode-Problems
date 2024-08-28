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
    void reorderList(ListNode* head) {
        vector<int>s;
        ListNode*t=head;
        while(t!=NULL){
            s.push_back(t->val);
            t=t->next;
        }
        t=head;
        int i=0;
        while(t!=NULL){
            t->val=s[i];
            if(t->next!=NULL){
                t=t->next;
                t->val=s[s.size()-1-i];
            }
            t=t->next;
            i++;
        }
    }
};