class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>mp = new HashMap<>();
        ArrayList<Integer>result = new ArrayList<>();
        for(int i=0;i<n;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        for(Map.Entry<Integer,Integer>entry: mp.entrySet()){
            if(entry.getValue()>1){
                result.add(entry.getKey());
            }
        }
        return result;

    }
}