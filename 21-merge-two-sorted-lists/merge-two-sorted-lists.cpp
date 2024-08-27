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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int>a;
        while(l1!=NULL){
            a.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            a.push_back(l2->val);
            l2=l2->next;
        }
        sort(a.begin(),a.end());
        if(a.size()==0){
            return NULL;
        }
        ListNode*ans=new ListNode;
        l1=ans;
        for(int i=0;i<a.size();i++){
            l1->val=a[i];
            if(i<a.size()-1){
                l1->next=new ListNode;
                l1=l1->next;
            }
        }

        return ans;
    }
};