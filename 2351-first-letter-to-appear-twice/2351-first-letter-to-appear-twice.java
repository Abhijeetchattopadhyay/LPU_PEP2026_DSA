class Solution {
    public char repeatedCharacter(String s) {
        LinkedHashMap<Character,Integer>mp=new LinkedHashMap<>();

        int n=s.length();
        for(int i=0;i<n;i++){
            mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
            for(Map.Entry<Character,Integer>entry: mp.entrySet()){
                if(entry.getValue()==2){
                    return entry.getKey();
                }
            }
        }
        return 0;
    }
}