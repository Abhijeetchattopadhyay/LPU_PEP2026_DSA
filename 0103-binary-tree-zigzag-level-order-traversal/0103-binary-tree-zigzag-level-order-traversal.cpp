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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        int level=1;
        while(!q.empty()){
            int size=q.size();
            vector<int>levelelements;
            vector<int>evenlevels;
            for(int i=0;i<size;i++){
                TreeNode*frontval=q.front();
                q.pop();
                if(level%2!=0){
                     levelelements.push_back(frontval->val);
                }else{
                     evenlevels.push_back(frontval->val);
                }
                if(frontval->left)  q.push(frontval->left);
                if(frontval->right) q.push(frontval->right);
            }
            for(int i=evenlevels.size()-1;i>=0;i--){
                 levelelements.push_back(evenlevels[i]);
            }

            ans.push_back(levelelements);
            level++;
        }
        return ans;
    }
};