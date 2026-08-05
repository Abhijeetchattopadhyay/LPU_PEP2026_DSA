class Solution {
    public int longestConsecutive(int[] nums) {
        int n=nums.length;
        if(n==0){
            return 0;
        }
        Arrays.sort(nums);
        int length=1;
        int maxlength=1;


        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(Math.abs(nums[i]-nums[i-1])==1){
                length++;
            }else{
                length=1;
            } 
           maxlength=Math.max(length,maxlength);
        }
        return maxlength;
    }
}