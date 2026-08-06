class Solution {
    public int thirdMax(int[] nums) {
        TreeSet<Integer>st = new TreeSet<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            st.add(nums[i]);
        }
        if(st.size()<3){
            return st.last();
        }
        st.pollLast();
        st.pollLast();

        return st.last();


    }
}