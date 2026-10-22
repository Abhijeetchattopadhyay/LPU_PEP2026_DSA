class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int count=0;
        int count1=0;
        ArrayList<Integer>result = new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]<target){
                count++;
            }
            if(nums[i]==target){
                count1++;
            }
        }
        
        for(int i=count;i<count1+count;i++){
            result.add(i);
        }
        return result;
    }
}