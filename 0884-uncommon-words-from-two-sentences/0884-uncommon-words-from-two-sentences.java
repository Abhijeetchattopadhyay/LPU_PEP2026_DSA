class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        ArrayList<String>result = new ArrayList<>();
        HashMap<String,Integer>mp = new HashMap<>();
        String words="";
        for(int i=0;i<s1.length();i++){
            if(s1.charAt(i)!=' '){
                words+=s1.charAt(i);
            }else{
                mp.put(words,mp.getOrDefault(words,0)+1);
                words="";
            }
        }
        if(!words.equals("")){
            mp.put(words,mp.getOrDefault(words,0)+1);
        }
        String ans="";
        for(int i=0;i<s2.length();i++){
            if(s2.charAt(i)!=' '){
                ans+=s2.charAt(i);
            }else{
                mp.put(ans,mp.getOrDefault(ans,0)+1);
                ans="";
            }
        }
        if(!ans.equals("")){
            mp.put(ans,mp.getOrDefault(ans,0)+1);
        }
        for(Map.Entry<String,Integer>entry: mp.entrySet()){
            if(entry.getValue()==1){
                result.add(entry.getKey());
            }
        }
        return result.toArray(new String[0]);


    }
}