class Solution {
    public int longestSubarray(int[] nums) {
       int n=nums.length;
       int length=0;
       int zero=0;
       int j=0;
       for(int i=0;i<n;i++){
           if(nums[i]==0){
              zero++;
           }
           while(zero>1){
             if(nums[j]==0){
                zero--;
            }
            j++;
           }
            length=Math.max(length,i-j);
       } 
       return length;
    }
}