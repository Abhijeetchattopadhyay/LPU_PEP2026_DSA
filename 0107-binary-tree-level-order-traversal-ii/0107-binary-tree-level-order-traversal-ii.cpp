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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>levelelements;
            for(int i=0;i<size;i++){
                TreeNode*frontval=q.front();
                levelelements.push_back(frontval->val);
                q.pop();
                if(frontval->left!=NULL){
                    q.push(frontval->left);
                }
                if(frontval->right!=NULL){
                    q.push(frontval->right);
                }
            }
            ans.push_back(levelelements);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};