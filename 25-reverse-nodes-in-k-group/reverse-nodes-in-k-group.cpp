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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>a;
        ListNode*t=head;
        int i=0;
        int c=0;
        while(1){
            ListNode*t1=t;
            i=0;
            while(i<k){
                if(t==NULL){
                    c=1;
                    break;
                }
                a.push_back(t->val);
                t=t->next;
                i++;
            }
            if(c==0){
                for(int j=a.size()-1;j>=0;j--){
                    t1->val=a[j];
                    t1=t1->next;
                }
            }else{
                break;
            }
            a.clear();
        }

        return head;
    }
};