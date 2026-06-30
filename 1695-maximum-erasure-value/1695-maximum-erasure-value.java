class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        int n=nums.length;
        int sum=0;
        int j=0;
        int maxscore=Integer.MIN_VALUE;
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i=0;i<n;i++){
            while(mp.containsKey(nums[i])){
                sum-=nums[j];
                mp.remove(nums[j]);
                j++;
            }
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
            sum+=nums[i];
            maxscore=Math.max(maxscore,sum);
        }

        return maxscore;
    }
}