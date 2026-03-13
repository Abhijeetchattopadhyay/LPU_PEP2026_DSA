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
        if(root==NULL){
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        int currsum=INT_MIN;
        int level=1;
        int maxlevel=1;
        while(!q.empty()){
            int size=q.size();
            int sum=0;
            for(int i=0;i<size;i++){
                TreeNode*frontnode=q.front();
                sum+=frontnode->val;
                q.pop();
                if(frontnode->left) q.push(frontnode->left);
                if(frontnode->right) q.push(frontnode->right);
            }
            if(sum>currsum){
                currsum=sum;
                maxlevel=level;
            }
            level++;
            
        }
        return maxlevel;
        
    }
    int maxLevelSum(TreeNode* root) {
       return sum(root);

    }
};