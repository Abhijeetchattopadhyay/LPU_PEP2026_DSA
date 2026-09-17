class Solution {
    public boolean isPalindrome(String s) {
        s=s.replaceAll("[^A-Za-z0-9]","");
        s=s.toLowerCase();
        StringBuilder sb = new StringBuilder(s);
        sb.reverse();

        return s.equals(sb.toString());
        
    }
}