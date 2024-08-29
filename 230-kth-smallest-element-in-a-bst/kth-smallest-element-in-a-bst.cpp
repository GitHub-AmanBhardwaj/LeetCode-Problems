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
    vector<int>t;
    void inOrderTraversal(TreeNode* root) {
        if(root==NULL){
            return;
        }
        inOrderTraversal(root->left);
        t.push_back(root->val);
        inOrderTraversal(root->right);
    }
    int kthSmallest(TreeNode* root,int k){
        inOrderTraversal(root);
        if(t.size()>=k){
            return t[k-1];
        }else{
            return 0;
        }
    }
};