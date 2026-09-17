class Solution {
    public String firstPalindrome(String[] words) {
        int n=words.length;
        String ans="";
        for(int i=0;i<n;i++){
            StringBuilder sb = new StringBuilder(words[i]);
            sb.reverse();

            if(words[i].equals(sb.toString())){
                ans=words[i];
                break;
            }
        }
        return ans;
    }
}