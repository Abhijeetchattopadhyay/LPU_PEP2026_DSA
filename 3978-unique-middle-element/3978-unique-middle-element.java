class Solution {
    public boolean isMiddleElementUnique(int[] nums) {
        int n=nums.length;
        int midelement = n/2;
        HashMap<Integer,Integer>mp = new HashMap<>();
        for(int i=0;i<n;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        for(Map.Entry<Integer,Integer>entry: mp.entrySet()){
            if(mp.get(nums[midelement])>1){
                return false;
            }
        }
        return true;
    }
}