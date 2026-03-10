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
        if(root==NULL) return result;
        queue<TreeNode*>q;
        q.push(root);
        bool leftToright=true;
        while(!q.empty()){
            int levelsize=q.size();
            vector<int>levelelements(levelsize);
            for(int i=0;i<levelsize;i++){
                TreeNode* frontNode=q.front();
                q.pop();
                int index;
                
                if(leftToright){
                    index=i;
                }else{
                    index=levelsize-i-1;
                }
                levelelements[index]=frontNode->val;

                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            leftToright=!leftToright;
            result.push_back(levelelements);


        }
     return result;
    }
};