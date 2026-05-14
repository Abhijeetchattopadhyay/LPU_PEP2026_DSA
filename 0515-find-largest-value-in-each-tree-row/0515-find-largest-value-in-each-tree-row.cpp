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
    vector<int> largestValues(TreeNode* root) {
        vector<int>result;
        if(!root){
            return result;
        }
        queue<TreeNode*>q;
        
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            int maxele=INT_MIN;
            for(int i=0;i<size;i++){
                TreeNode*frontval=q.front();
                q.pop();
                if(frontval->val>maxele){
                    maxele=frontval->val;
                }

                if(frontval->left) q.push(frontval->left);
                if(frontval->right) q.push(frontval->right);
            }
            result.push_back(maxele);
        }
        return result;
    }
};