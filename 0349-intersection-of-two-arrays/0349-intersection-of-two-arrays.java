class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
         int n=nums1.length;
         int m=nums2.length;
        ArrayList<Integer>result=new ArrayList<>();
        HashSet<Integer>st = new HashSet<>();

        for(int i=0;i<n;i++){
            st.add(nums1[i]);
        }

        for(int i=0;i<m;i++){
            if(st.contains(nums2[i])){
                result.add(nums2[i]);
                st.remove(nums2[i]);
            }

        }
        int [] ans=new int[result.size()];
        for(int i=0;i<result.size();i++){
            ans[i]=result.get(i);
        }

        return ans;
    }
}