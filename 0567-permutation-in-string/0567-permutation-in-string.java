class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int n1=s1.length();
        int n2=s2.length();
        if(n1>n2){
            return false;
        }
        HashMap<Character,Integer>mp1 = new HashMap<>();
        HashMap<Character,Integer>mp2 = new HashMap<>();

        for(int i=0;i<n1;i++){
            char ch=s1.charAt(i);
            mp1.put(ch,mp1.getOrDefault(ch,0)+1);
        }
        for(int i=0;i<n1;i++){
            char ch=s2.charAt(i);
            mp2.put(ch,mp2.getOrDefault(ch,0)+1);
        }
        if(mp1.equals(mp2)){
            return true;
        }
        int j=0;
        for(int i=n1;i<n2;i++){
            char ch = s2.charAt(j);
            mp2.put(ch,mp2.getOrDefault(ch,0)-1);
            if(mp2.get(ch)==0){
                mp2.remove(ch);
            }
            j++;
           mp2.put(s2.charAt(i),mp2.getOrDefault(s2.charAt(i),0)+1);
           if(mp1.equals(mp2)){
              return true;
           }
        }

        return false;
    }

}