class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int n=s.length();
        int m=p.length();
        
        HashMap<Character,Integer>mp1 = new HashMap<>();
        HashMap<Character,Integer>mp2 = new HashMap<>();
        int j=0;
        ArrayList<Integer>result = new ArrayList<>();
        if(n<m){
            return result;
        }
        for(int i=0;i<m;i++){
            char ch = p.charAt(i);
            mp1.put(ch,mp1.getOrDefault(ch,0)+1);
        }
        for(int i=0;i<m;i++){
            char ch = s.charAt(i);
            mp2.put(ch,mp2.getOrDefault(ch,0)+1);
        }
        if(mp1.equals(mp2)){
             result.add(j);
        }

        for(int i=m;i<n;i++){
            char ch=s.charAt(j);
            mp2.put(ch, mp2.getOrDefault(ch,0)-1);
            if(mp2.get(ch)==0){
                mp2.remove(ch);
                
            }
            j++;
            mp2.put(s.charAt(i),mp2.getOrDefault(s.charAt(i),0)+1);

            if(mp1.equals(mp2)){
                result.add(j);
            }
        }
        return result;
    }
}