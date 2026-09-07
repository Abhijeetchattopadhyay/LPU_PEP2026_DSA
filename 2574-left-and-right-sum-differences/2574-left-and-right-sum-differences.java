class Solution {
    public int[] leftRightDifference(int[] nums) {
        int n=nums.length;  
        ArrayList<Integer>leftsumarr=new ArrayList<>();
        ArrayList<Integer>rightsumarr= new ArrayList<>(Collections.nCopies(n, 0));
        ArrayList<Integer>result = new ArrayList<>();
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<n;i++){
            leftsumarr.add(leftsum);
            leftsum+=nums[i];    
        }
        for(int i=n-1;i>=0;i--){
            rightsum+=nums[i];
            rightsumarr.set(i,rightsum-nums[i]);
        }
        for(int i=0;i<n;i++){
            result.add(Math.abs(leftsumarr.get(i)-rightsumarr.get(i)));

        }
       int [] arr = new int[result.size()];
       for(int i=0;i<n;i++){
          arr[i]=result.get(i);
       }
       return arr;
    }
}