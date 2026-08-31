class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int n=nums.length;
        ArrayList<Integer>result = new ArrayList<>();
        HashMap<Integer,Integer>mp = new HashMap<>();
        for(int i=0;i<n;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        for(Map.Entry<Integer,Integer>entry: mp.entrySet()){
            if(entry.getValue()>n/3){
                result.add(entry.getKey());
            }
        }
        return result;
    }
}