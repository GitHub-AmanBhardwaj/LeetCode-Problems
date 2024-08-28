/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int i,j;
        if((p==NULL&&q!=NULL)||(p!=NULL&&q==NULL)){
            return 0;
        }
        if(p!=NULL&&q!=NULL){
        if(p->val==q->val){
            i=isSameTree(p->left,q->left);
            j=isSameTree(p->right,q->right);
        }else{
            return 0;
        }
        }else{
            return 1;
        }
        return i&&j;
    }
};