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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL) {
            return head;
        }
        ListNode*even=head;
        ListNode*odd=head->next;
        ListNode*oddt=odd;
        while(oddt!=NULL&&oddt->next!=NULL) {
            even->next=oddt->next;
            even=even->next;
            oddt->next=even->next;
            oddt=oddt->next;
        }
        even->next=odd;
        return head;
    }
};
