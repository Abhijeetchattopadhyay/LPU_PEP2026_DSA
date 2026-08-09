class Solution {
    public long zeroFilledSubarray(int[] nums) {
        long result=0;
        long count=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
                result+=count;
            }else{
                count=0;
            }
        }
        return result;
    }
}