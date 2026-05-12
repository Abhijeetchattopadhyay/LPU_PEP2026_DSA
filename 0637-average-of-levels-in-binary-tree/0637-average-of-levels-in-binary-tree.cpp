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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        double average=0;
        while(!q.empty()){
            int size=q.size();
            double sum=0;

            for(int i=0;i<size;i++){
                TreeNode*frontval=q.front();
                sum+=frontval->val;
                q.pop();
                average=sum/size;
                if(frontval->left!=NULL){
                    q.push(frontval->left);
                }
                if(frontval->right!=NULL){
                    q.push(frontval->right);
                }
            }
            ans.push_back(average);
        }
        return ans;
    }
};