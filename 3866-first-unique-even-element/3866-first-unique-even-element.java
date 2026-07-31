class Solution {
    public int firstUniqueEven(int[] nums) {
        int n=nums.length;
        LinkedHashMap<Integer,Integer>mp = new LinkedHashMap<>();
        
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
               mp.put(nums[i],mp.getOrDefault(nums[i],0)+1); 
            }
        }
        for(Map.Entry<Integer,Integer>entry: mp.entrySet()){
            if(entry.getValue()==1){
                return entry.getKey();
            }
        }
        return -1;
    }
}