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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int i=0;
        ListNode*s=list1;
        while(i<a-1&&s!=NULL){
            s=s->next;
            i++;
        }
        ListNode*e=s;
        i=0;
        while(i<b-a+2&&e!=NULL){
            e=e->next;
            i++;
        }
        s->next=list2;
        while(list2->next!=NULL){
            list2=list2->next;
        }
        list2->next=e;
        return list1;
        
    }
};