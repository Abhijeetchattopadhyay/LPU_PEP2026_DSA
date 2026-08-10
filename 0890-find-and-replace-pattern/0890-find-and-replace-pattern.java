class Solution {
    public List<String> findAndReplacePattern(String[] words, String pattern) {
        ArrayList<String>result = new ArrayList<>();
        for(int i=0;i<words.length;i++){
            HashMap<Character,Character>mp1 = new HashMap<>();
            HashMap<Character,Character>mp2 = new HashMap<>();
            boolean flag = true;
            String ans=words[i];
            for(int j=0;j<ans.length();j++){
                char ch=ans.charAt(j);
                char th=pattern.charAt(j);
                if(mp1.containsKey(ch) && mp1.get(ch)!=th || mp2.containsKey(th)&& mp2.get(th)!=ch){
                    flag = false;
                    break;
                }
                mp1.put(ch,th);
                mp2.put(th,ch);
            }
            if(flag){
                result.add(ans);
            }
        }
        return result;
    }
}