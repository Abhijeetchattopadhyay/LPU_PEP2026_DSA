class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int count=0;
        int n=jewels.length();
        HashMap<Character,Integer>mp = new HashMap<>();
        for(int i=0;i<n;i++){
            char ch=jewels.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        for(int i=0;i<stones.length();i++){
            char ch=stones.charAt(i);
            if(mp.containsKey(ch)){
                count++;
            }
        }
        return count;

    }
}