class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n=s.length();
        HashMap<Character,Integer>mp = new HashMap<>();
        int j=0;
        int length=0;
        for(int i=0;i<n;i++){
            char ch = s.charAt(i);
            while(mp.containsKey(ch)){
                mp.put(s.charAt(j),mp.getOrDefault(s.charAt(j),0)-1);
                if(mp.get(s.charAt(j))==0){
                    mp.remove(s.charAt(j));
                }
                j++;
            }
            length=Math.max(length,i-j+1);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        return length;
    }
}