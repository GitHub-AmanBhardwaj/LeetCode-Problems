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
            i=isSameTree(p->left,q->right);
            j=isSameTree(p->right,q->left);
        }else{
            return 0;
        }
        }else{
            return 1;
        }
        return i&&j;
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return 1;
        }else if((root->left==NULL&&root->right!=NULL)||(root->left!=NULL&&root->right==NULL)){
            return 0;
        }
        return isSameTree(root->left,root->right);
    }
};