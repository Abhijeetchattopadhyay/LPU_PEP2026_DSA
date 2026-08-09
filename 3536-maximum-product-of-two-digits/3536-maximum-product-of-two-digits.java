class Solution {
    public int maxProduct(int n) {
        int largest=Integer.MIN_VALUE;
        int slargest=Integer.MIN_VALUE;

        while(n!=0){
            int lastdigit=n%10;
            if(lastdigit>largest){
                slargest=largest;
                largest=lastdigit;
            }else if(lastdigit>slargest){
                slargest=lastdigit;
            }
            n/=10;
        }
        return largest*slargest;
    }
}