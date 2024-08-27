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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*t1=l1;
        ListNode*t2=l2;
        ListNode*ans=new ListNode;
        ListNode*t=ans;
        int carry=0;
        while(t1!=NULL&&t2!=NULL){
            int s=t1->val+t2->val+carry;
            t->val=s%10;
            carry=s/10;
            if(t1->next!=NULL||t2->next!=NULL){
                t->next=new ListNode;
            }if(carry!=0&&t1->next==NULL&&t2->next==NULL){
                t->next=new ListNode;
                t->next->val=carry;
            }
            t=t->next;
            t1=t1->next;
            t2=t2->next;
        }   
        while(t1!=NULL){
            int s=t1->val+carry;
            t->val=s%10;
            carry=s/10;
            if(t1->next!=NULL){
                t->next=new ListNode;
            }
            if(carry!=0&&t1->next==NULL){
                t->next=new ListNode;
                t->next->val=carry;
            }
            t=t->next;
            t1=t1->next;
        }
        while(t2!=NULL){
            int s=t2->val+carry;
            t->val=s%10;
            carry=s/10;
            if(t2->next!=NULL){
                t->next=new ListNode;
            }
            if(carry!=0&&t2->next==NULL){
                t->next=new ListNode;
                t->next->val=carry;
            }
            t=t->next;
            t2=t2->next;
        }

        return ans;
    }
};