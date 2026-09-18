class Solution {
    public boolean checkIfPangram(String sentence) {
        int n=sentence.length();
        HashMap<Character,Integer> mp = new HashMap<>();
        for(int i=0;i<n;i++){
            char ch=sentence.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }

        if(mp.size()==26){
            return true;
        }
        return false;
    }
}