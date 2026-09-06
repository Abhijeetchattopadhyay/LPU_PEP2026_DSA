class Solution {
    public int maxConsecutiveAnswers(String answerKey, int k) {
        int [] freq = new int[26];
        int maxfreq=0;
        int maxlen=0;
        int j=0;
        int n=answerKey.length();
        for(int i=0;i<n;i++){
            freq[answerKey.charAt(i)-'A']++;
            maxfreq=Math.max(maxfreq,freq[answerKey.charAt(i)-'A']);
            while(((i-j+1)-maxfreq)>k){
                freq[answerKey.charAt(j)-'A']--;
                j++;
            }
            maxlen=Math.max(maxlen,i-j+1);
        }
        return maxlen;
    }
}