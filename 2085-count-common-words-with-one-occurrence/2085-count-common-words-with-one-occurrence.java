class Solution {
    public int countWords(String[] words1, String[] words2) {
        HashMap<String,Integer>mp1=new HashMap<>();
        HashMap<String,Integer>mp2=new HashMap<>();
        int n1=words1.length;
        int n2=words2.length;
        int count=0;
        for(int i=0;i<n1;i++){
            mp1.put(words1[i],mp1.getOrDefault(words1[i],0)+1);
        }
        for(int i=0;i<n2;i++){
            mp2.put(words2[i],mp2.getOrDefault(words2[i],0)+1);
        }
        for(Map.Entry<String,Integer>entry: mp1.entrySet()){
              if(entry.getValue()==1 && mp2.getOrDefault(entry.getKey(),0)==1){
                 count++;
              }
        }
        return count;
    }
}