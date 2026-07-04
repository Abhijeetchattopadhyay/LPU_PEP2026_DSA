/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>>result= new ArrayList<>();

        if(root==null){
            return result;
        }
        Queue<TreeNode>q=new LinkedList<>();
        q.add(root);

        while(!q.isEmpty()){
            int size= q.size();
            List<Integer>levelelements= new ArrayList<>();

            for(int i=0;i<size;i++){
                TreeNode frontval = q.peek();
                q.poll();
                levelelements.add(frontval.val);
                if(frontval.left!=null)  q.add(frontval.left);
                if(frontval.right!=null) q.add(frontval.right);
            }
            result.add(levelelements);
        }
        

        return result;
    }
}