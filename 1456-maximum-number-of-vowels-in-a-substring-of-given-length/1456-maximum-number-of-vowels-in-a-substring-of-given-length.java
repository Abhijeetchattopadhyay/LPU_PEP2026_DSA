class Solution {
    public int maxVowels(String s, int k) {
        int n=s.length();
        int length=0;
        int maxlength=0;
        for(int i=0;i<k;i++){
            char ch=s.charAt(i);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                length++;
            }
        
            maxlength=Math.max(length,maxlength);
        }

        for(int i=k;i<n;i++){
            char ch=s.charAt(i-k);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                length--;
            }
            char add=s.charAt(i);
            if(add=='a' || add=='e' || add=='i' || add=='o' || add=='u'){
                length++;
            }
            maxlength=Math.max(maxlength,length);

        }
        return maxlength;
    }
}