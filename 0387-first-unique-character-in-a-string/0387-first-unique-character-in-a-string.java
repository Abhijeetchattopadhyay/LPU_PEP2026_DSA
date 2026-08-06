class Solution {
    public int firstUniqChar(String s) {
        LinkedHashMap<Character,Integer>mp = new LinkedHashMap<>();
        int n=s.length();
        int index=-1;
        for(int i=0;i<n;i++){
            mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
        }

        for(int i=0;i<n;i++){
            if(mp.get(s.charAt(i))==1){
                return i;
            }
        }
        return index;
        
    }
}