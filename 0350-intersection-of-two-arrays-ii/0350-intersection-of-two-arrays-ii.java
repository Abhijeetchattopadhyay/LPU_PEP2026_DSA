class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int n=nums1.length;
        int m=nums2.length;

        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i=0;i<n;i++){
            mp.put(nums1[i],mp.getOrDefault(nums1[i],0)+1);
        }
        ArrayList<Integer>result=new ArrayList<>();

        for(int i=0;i<m;i++){
            if(mp.containsKey(nums2[i])){
                result.add(nums2[i]);
                mp.put(nums2[i],mp.get(nums2[i])-1);
                if(mp.get(nums2[i])==0){
                mp.remove(nums2[i]);
                }
            }
        }
        int[] arr= new int[result.size()];
        for(int i=0;i<result.size();i++){
            arr[i]= result.get(i);
        }

        return arr;
    }
}