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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL||left==right)return head;
        vector<int>a;
        ListNode*t=head;
        int i=1;
        while(t!=NULL){
            if(i>=left&&i<=right){
                a.push_back(t->val);
            }
            t=t->next;
            i++;
        }
        t=head;
        i=1;
        int j=a.size()-1;
        while(t!=NULL){
            if(i>=left&&i<=right){
                t->val=a[j];
                j--;
            }
            t=t->next;
            i++;
        }
        return head;
    }
};