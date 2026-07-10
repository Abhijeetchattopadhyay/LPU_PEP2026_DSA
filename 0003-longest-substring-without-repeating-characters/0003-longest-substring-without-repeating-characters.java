class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n=s.length();
        HashMap<Character,Integer>mp = new HashMap<>();
        int maxlength=0;
        int j=0;
        for(int i=0;i<n;i++){
            while(mp.containsKey(s.charAt(i))){
                mp.remove(s.charAt(j));
                j++;
            }
            mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
            maxlength=Math.max(maxlength,i-j+1);

        }
        return maxlength;
    }
}