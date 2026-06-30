class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n=nums.length;
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i=0;i<n;i++){
            int find=target-nums[i];
            if(mp.containsKey(find)){
                return new int[]{mp.get(find),i};
            }
            mp.put(nums[i],i);
        }
    return new int[]{};
    }
}