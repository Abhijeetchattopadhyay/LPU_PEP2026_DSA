class Solution {
    public boolean anagram(String s1, String s2){
        if(s1.length()!=s2.length()){
            return false;
        }
        HashMap<Character,Integer>mp1 = new HashMap<>();
        HashMap<Character,Integer>mp2 = new HashMap<>();

        for(int i=0;i<s1.length();i++){
            mp1.put(s1.charAt(i),mp1.getOrDefault(s1.charAt(i),0)+1);
        }
        for(int i=0;i<s2.length();i++){
            mp2.put(s2.charAt(i),mp2.getOrDefault(s2.charAt(i),0)+1);
        }
        return mp1.equals(mp2);
    }
    public List<String> removeAnagrams(String[] words) {
        int n=words.length;
        ArrayList<String>result = new ArrayList<>();
        result.add(words[0]);
        for(int i=1;i<n;i++){
            // String words1="";
            if(!anagram(words[i],words[i-1])){
                result.add(words[i]);
            }
            // words1 = words[i];


        }
        return result;
    }
}