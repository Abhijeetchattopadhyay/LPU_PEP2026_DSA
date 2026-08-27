class Solution {
    public String frequencySort(String s) {
        HashMap<Character,Integer>mp = new HashMap<>();
        int n=s.length();
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        ArrayList<Map.Entry<Character,Integer>>result = new ArrayList<>(mp.entrySet());
        result.sort((a,b)->{
            if(a.getValue()==b.getValue()){
                return a.getKey()-b.getKey();
            }
            return b.getValue()-a.getValue();
        });

      
        String ans="";
        for(Map.Entry<Character,Integer>entry: result){
            for(int i=0;i<entry.getValue();i++){
                ans+=entry.getKey();
            }
        }
        return ans;
    }
}