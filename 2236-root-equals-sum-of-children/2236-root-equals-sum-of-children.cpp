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
    int sum(TreeNode*root){
        int add=0;
        if(root==NULL){
            return 0;
        }
        add+=sum(root->left);
        add+=sum(root->right);
        return add;
    }

    bool checkTree(TreeNode* root) {
        sum(root);
        if(root==NULL){
            return false;
        }
        return root->val==root->left->val+root->right->val;
    }
};