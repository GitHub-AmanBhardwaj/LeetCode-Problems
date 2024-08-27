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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int >a;
        for(ListNode*i :lists){
            ListNode*t=i;
            while(t!=NULL){
            a.push_back(t->val);
            t=t->next;
        }
        }
        if(a.size()==0){
            return NULL;
        }
        sort(a.begin(),a.end());
        ListNode*head=new ListNode;
        ListNode*t=head;

        for(int i=0;i<a.size();i++){
            t->val=a[i];
            if(i<a.size()-1){
                t->next=new ListNode;
                t=t->next;   
            } 
        }
        return head;
    }
};