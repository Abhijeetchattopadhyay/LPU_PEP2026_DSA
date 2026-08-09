class Solution {
    public int longestContinuousSubstring(String s) {
        int n=s.length();
        int length=1;
        int maxlength=1;
        for(int i=1;i<n;i++){
            int index=s.charAt(i)-'a';
            int prev=s.charAt(i-1)-'a';
            if((index-prev)==1){
                length++;
            }else{
                length=1;
            }
            maxlength=Math.max(maxlength,length);
        }

        return maxlength;


    }
}