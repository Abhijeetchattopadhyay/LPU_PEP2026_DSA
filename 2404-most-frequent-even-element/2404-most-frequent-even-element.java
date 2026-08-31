class Solution {
    public int mostFrequentEven(int[] nums) {
       int n=nums.length;
       HashMap<Integer,Integer>mp=new HashMap<>();
       int even=-1;
       for(int i=0;i<n;i++){
        if(nums[i]%2==0){
           mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
       }
       ArrayList<Map.Entry<Integer,Integer>>result = new ArrayList<>(mp.entrySet());

       result.sort((a,b)->{
          if(a.getValue()==b.getValue()){
            return a.getKey()-b.getKey();
          }
          return b.getValue()-a.getValue();
       });

       for(Map.Entry<Integer,Integer>entry: mp.entrySet()){
           even=result.get(0).getKey();
       }
       return even;
        
    }
}