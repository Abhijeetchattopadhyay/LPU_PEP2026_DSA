class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        int n=nums.length;
        ArrayList<Integer>result = new ArrayList<>();

        int max= Integer.MIN_VALUE;
        int min=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            max= Math.max(max,nums[i]);
        }
        for(int i=0;i<n;i++){
            min= Math.min(min,nums[i]);
        }
        HashSet<Integer>st = new HashSet<>();
        for(int i=0;i<n;i++){
            st.add(nums[i]);
        }
        for(int i=min;i<max;i++){
            if(!st.contains(i)){
                result.add(i);
            }
        }
        
        
        return result;
    }
}