class Solution {
    public boolean wordPattern(String pattern, String s) {
       
       String [] words = s.split(" ");
       if(words.length!=pattern.length()){
        return false;
       }
       HashMap<Character,String>mp1 = new HashMap<>();
       HashMap<String,Character>mp2 = new HashMap<>();
       for(int i=0;i<pattern.length();i++){
         char ch=pattern.charAt(i);
         String ans=words[i];

         if(mp1.containsKey(ch) && !mp1.get(ch).equals(ans) || mp2.containsKey(ans) && !mp2.get(ans).equals(ch)){
            return false;
         }
           mp1.put(ch,ans);
           mp2.put(ans,ch);
       }

       return true; 
    }
}