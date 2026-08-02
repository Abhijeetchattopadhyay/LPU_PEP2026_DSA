class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        int n=ransomNote.length();
        int m=magazine.length();
        
        HashMap<Character,Integer>mp1 = new HashMap<>();
        for(int i=0;i<n;i++){
            mp1.put(ransomNote.charAt(i),mp1.getOrDefault(ransomNote.charAt(i),0)+1);
        }
        for(int i=0;i<m;i++){
            if(mp1.containsKey(magazine.charAt(i))){
                mp1.put(magazine.charAt(i),mp1.get(magazine.charAt(i))-1);

                if(mp1.get(magazine.charAt(i))==0){
                    mp1.remove(magazine.charAt(i));
                }
            }
            
        }
        return mp1.isEmpty();
        
    }
}