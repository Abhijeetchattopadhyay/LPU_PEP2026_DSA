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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ans=0;
        queue<TreeNode*>q;
        q.push(root);
        int level=1;
        int maxsum=INT_MIN;
        while(!q.empty()){
            int size=q.size();
            int sum=0;
            for(int i=0;i<size;i++){
                TreeNode*frontval=q.front();
                q.pop();
                sum+=frontval->val;
                if(frontval->left) q.push(frontval->left);
                if(frontval->right) q.push(frontval->right);
                
            }
            if(sum>maxsum){
                maxsum=sum;
                ans=level;
            }
            level++;
        }
        return ans;
    }
};