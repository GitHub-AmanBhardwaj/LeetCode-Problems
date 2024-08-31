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
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root!=NULL){
            if(val==root->val){
                return root;
            }else if(val>root->val){
                if(root->right==NULL){
                    return NULL;
                }               
                root=root->right;
            }else{
                if(root->left==NULL){
                    return NULL;
                }               
                root=root->left;
            }
        }
        return root;
    }
};