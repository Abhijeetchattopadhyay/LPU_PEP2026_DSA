class Solution {
    public int mostWordsFound(String[] sentences) {
        int maxcount=1;
        int n=sentences.length;
        for(int i=0;i<n;i++){
            int count=1;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i].charAt(j)==' '){
                    count++;
                }
            }
            maxcount=Math.max(count,maxcount);
        }
        return maxcount;
    }
}