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
    vector<int>a;
    void pre(TreeNode*root){
        if(root!=NULL){
            a.push_back(root->val);
            pre(root->left);
            pre(root->right);

        }
    }
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        pre(root);
        TreeNode*t=root;
        root->left=NULL;
        for(int i=1;i<a.size();i++){        
            t->right=new TreeNode(a[i]);
            t=t->right;
        }
        for(int i:a){
            cout<<i;
        }
    }
};