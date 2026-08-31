class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        int n=nums.length;
        HashMap<Integer,Integer>mp = new HashMap<>();
        for(int i=0;i<n;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        ArrayList<Map.Entry<Integer,Integer>>result = new ArrayList<>(mp.entrySet());
        result.sort((a,b)->{
            if(a.getValue()==b.getValue()){
                return b.getKey()-a.getKey();
            }
            return b.getValue()-a.getValue();
        });

        ArrayList<Integer>clone = new ArrayList<>();
        for(int i=0;i<k;i++){
            clone.add(result.get(i).getKey());
        }
        int[]arr = new int[clone.size()];
        for(int i=0;i<clone.size();i++){
            arr[i]=clone.get(i);
        }
        return arr;
    }
}