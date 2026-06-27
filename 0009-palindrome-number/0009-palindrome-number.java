class Solution {
    public boolean isPalindrome(int x) {
        int n=x;
        if(x<0){
            return false;
        }
        int rev=0;
        while(n!=0){
            int lastdigit=n%10;
            rev=(rev*10)+lastdigit;
            n/=10;
        }
        if(rev==x){
            return true;
        }else{
            return false;
        }
    }
}