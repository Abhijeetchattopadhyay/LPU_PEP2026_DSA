class Solution {
    public int maxPower(String s) {
        int n=s.length();
        int length=1;
        int maxlength=1;
        for(int i=0;i<n-1;i++){
            if(s.charAt(i)==s.charAt(i+1)){
                length++;
            }else{
                length=1;
            }

            maxlength=Math.max(length,maxlength);
        }
        return maxlength;
    }
}