class Solution {
    public int percentageLetter(String s, char letter) {
        int n=s.length();
        int count=0;
        int count1=0;
        for(int i=0;i<n;i++){
            count++;
            if(s.charAt(i)==letter){
                count1++;
            }
        }
        int percentage=(count1*100)/count;
        return percentage;

       

    }
}