class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n=nums.length;
        int sum=0;
        int minlength=Integer.MAX_VALUE;
        int j=0;
        for(int i=0;i<n;i++){
           sum+=nums[i];
           while(sum>=target){
             minlength=Math.min(minlength,i-j+1);
              sum=sum-nums[j];
              j++;
           } 
        }
        if(minlength==Integer.MAX_VALUE){
            return 0;
        }
        return minlength;
    }
}