class Solution {
    public int minimizedStringLength(String s) {
        int n=s.length();
        HashSet<Character>set = new HashSet<>();
        for(int i=0;i<n;i++){
            set.add(s.charAt(i));
        }
        return set.size();
    }
}