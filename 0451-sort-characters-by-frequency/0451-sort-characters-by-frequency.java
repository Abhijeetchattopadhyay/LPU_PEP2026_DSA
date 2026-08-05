class Solution {
    public String frequencySort(String s) {
        int n=s.length();
        HashMap<Character,Integer>mp = new HashMap<>();
        for(int i=0;i<n;i++){
            char ch= s.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        ArrayList<Map.Entry<Character,Integer>>list = new ArrayList<>(mp.entrySet());
        list.sort((a,b)->b.getValue()-a.getValue());
        String ans="";
        for(Map.Entry<Character,Integer>entry : list){
            for(int i=0;i<entry.getValue();i++){
                ans+=entry.getKey();
            }
        }
        return ans;

    }
}