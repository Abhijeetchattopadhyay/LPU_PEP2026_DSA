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
    int currNum=0;
    int currfreq=0;
    int maxfreq=0;
    vector<int>result;
    void dfs(TreeNode* root){
        if(root==NULL){
            return;
        }
        dfs(root->left);
        if(root->val==currNum){
            currfreq++;
    
        }else{
            currNum=root->val;
            currfreq=1;
        }

        if(currfreq>maxfreq){
            result={};
            maxfreq=currfreq;
        }
        if(currfreq==maxfreq){
            result.push_back(root->val);
        }
        dfs(root->right);

    }
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        return result;
        
    }
};