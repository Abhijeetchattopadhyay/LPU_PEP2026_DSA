class Solution {
    public int[] getConcatenation(int[] nums) {
        int n=nums.length;
        ArrayList<Integer>result = new ArrayList<>();
        for(int i=0;i<2*n;i++){
            result.add(nums[i%n]);
        }

        int [] arr=new int[result.size()];
        for(int i=0;i<result.size();i++){
            arr[i]=result.get(i);
        }
        return arr;
    }
}