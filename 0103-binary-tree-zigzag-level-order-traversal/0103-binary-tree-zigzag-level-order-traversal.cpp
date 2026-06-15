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
        vector<vector<int>>result;
        if(!root){
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);
        int levelsize=1;
        while(!q.empty()){
            int size=q.size();
            vector<int>levelelements;
            for(int i=0;i<size;i++){
                TreeNode*frontval=q.front();
                q.pop();
                levelelements.push_back(frontval->val);
                if(frontval->left!=NULL) q.push(frontval->left);
                if(frontval->right!=NULL) q.push(frontval->right);
            }
            if(levelsize%2==0){
                reverse(levelelements.begin(),levelelements.end());
            }
            result.push_back(levelelements);
            levelsize++;
        }
        return result;
    }
};