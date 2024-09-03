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
    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* previous = nullptr;
        ListNode* current = head;
        while (current) {
            ListNode* next_node = current->next;  // Save next node
            current->next = previous;             // Reverse the link
            previous = current;                   // Move previous to current
            current = next_node;                  // Move to next node
        }
        return previous;
    }
    ListNode* removeNodes(ListNode* head) {
        head=reverseLinkedList(head);
        ListNode*t=head;
        int m=head->val;
        while(t->next!=NULL){
            if(t->next->val<m){
                t->next=t->next->next;
            }else{
                m=t->next->val;
                t=t->next;
            }
        }

        return reverseLinkedList(head);
    }
};