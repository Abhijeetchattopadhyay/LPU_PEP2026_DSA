class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character,Character>mp1 = new HashMap<>();
        HashMap<Character,Character>mp2 = new HashMap<>();

        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            char th = t.charAt(i);

            if(mp1.containsKey(ch) && mp1.get(ch)!=th || mp2.containsKey(th) && mp2.get(th)!=ch){
                return false;
            }

            mp1.put(ch,th);
            mp2.put(th,ch);
        }
        return true;
    }
}