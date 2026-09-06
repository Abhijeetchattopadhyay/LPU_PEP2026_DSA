class Solution {
    public int characterReplacement(String s, int k) {
        int n=s.length();
        int maxfreq=0;
        int maxlen=0;
        int j=0;
        int [] freq = new int[26];
        for(int i=0;i<n;i++){
            freq[s.charAt(i)-'A']++;
            maxfreq=Math.max(maxfreq,freq[s.charAt(i)-'A']);

            while(((i-j+1)-maxfreq)>k){
                freq[s.charAt(j)-'A']--;
                j++;
            }
            maxlen=Math.max(maxlen,i-j+1);
        }
        return maxlen;
    }
}