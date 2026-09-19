class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        String result= s+s;
        int n=result.length();

        return result.contains(goal);
    }
}