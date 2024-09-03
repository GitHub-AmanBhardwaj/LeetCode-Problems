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
    ListNode* reverseList(ListNode*head){
        ListNode*prev=NULL;
        ListNode*current=head;
        while(current){
            ListNode*next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    
    }
    ListNode* doubleIt(ListNode* head) {
        if(head==NULL){
            return head;
        }
        head=reverseList(head);
        int carry=0;
        ListNode*t=head;
        while(t){
            int sum=t->val*2+carry;
            t->val=sum%10;
            carry=sum/10;
            if(t->next==NULL&&carry>0){
                t->next=new ListNode(carry);
                break;
            }
            t=t->next;
        }

        head=reverseList(head);
        return head;
    }
};