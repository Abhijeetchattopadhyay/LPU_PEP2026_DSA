class Solution {
    public String customSortString(String order, String s) {
        LinkedHashMap<Character,Integer>mp = new LinkedHashMap<>();
        int n=s.length();
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        String ans="";
        for(int i=0;i<order.length();i++){
            char ch=order.charAt(i);
            if(mp.containsKey(ch)){
               int count=mp.get(ch);
            for(int j=0;j<count;j++){
                ans+=ch;
            }
            }
            
        }
        for(int i=0;i<n;i++){
           char ch=s.charAt(i);
            if(!ans.contains(String.valueOf(ch))){
                 int count=mp.get(ch);
                 for(int j=0;j<count;j++){
                     ans+=ch;
                 }
           }
           
        }
        return ans;
    }
}