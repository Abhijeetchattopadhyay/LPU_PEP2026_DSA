class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        HashMap<Character,Integer>mp = new HashMap<>();
        int n=magazine.length();
        for(int i=0;i<n;i++){
            char ch=magazine.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        for(int i=0;i<ransomNote.length();i++){
            char ch=ransomNote.charAt(i);
              if(mp.containsKey(ch) && mp.get(ch)>0){
                mp.put(ch,mp.getOrDefault(ch,0)-1);
             }else{
                return false;
             }
        }
        return true;
    }
}