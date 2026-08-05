class Solution {
    public int[] frequencySort(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>mp = new HashMap<>();
        for(int i=0;i<n;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        
        }
        ArrayList<Map.Entry<Integer,Integer>>result=new ArrayList<>(mp.entrySet());
        result.sort((a,b)->{
            if(a.getValue()==b.getValue()){
                return b.getKey()-a.getKey();
            }
            return a.getValue()-b.getValue();
        });
        ArrayList<Integer>list = new ArrayList<>();
        for(Map.Entry<Integer,Integer>entry: result){
                for(int i=0;i<entry.getValue();i++){
                    list.add(entry.getKey());
                }
        } 
        int [] ans = new int[list.size()];

        for(int i=0;i<list.size();i++){
            ans[i]=list.get(i);
        }
        return ans;
    }
}