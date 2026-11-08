class Solution {
    public int scoreOfString(String s) {
        int score=0;
        int n=s.length();
        for(int i=1;i<n;i++){
            int ascii = (int) s.charAt(i);
            int ascii1 = (int) s.charAt(i-1);
            score+=Math.abs(ascii-ascii1);
        }
        return score;
    }
}