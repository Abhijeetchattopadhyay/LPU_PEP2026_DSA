class Solution {
    public int missingNumber(int[] nums) {
        HashSet<Integer>st = new HashSet<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            st.add(nums[i]);
        }
        for(int i=0;i<=n;i++){
            if(!st.contains(i)){
                return i;
            }
        }
        return 0;
        
    }
}