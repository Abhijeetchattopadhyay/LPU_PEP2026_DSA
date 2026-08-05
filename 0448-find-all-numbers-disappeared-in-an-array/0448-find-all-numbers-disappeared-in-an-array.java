class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int n=nums.length;
        HashSet<Integer>st = new HashSet<>();
        for(int i=0;i<n;i++){
            st.add(nums[i]);
        }
        ArrayList<Integer>result = new ArrayList<>();
        for(int i=1;i<=n;i++){
            if(!st.contains(i)){
                result.add(i);
            }
        }
        return result;
    }
}