class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n=s.length();
        int maxlength=0;
        HashMap<Character,Integer>mp=new HashMap<>();
        int j=0;
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            while(mp.containsKey(ch)){
                mp.remove(s.charAt(j));
                j++;
            }
            mp.put(ch,mp.getOrDefault(ch,0)+1);
            maxlength=Math.max(maxlength,i-j+1);
        }

        return maxlength;
    }
}