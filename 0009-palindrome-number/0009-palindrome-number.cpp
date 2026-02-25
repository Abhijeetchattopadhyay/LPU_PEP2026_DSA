class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int y=x;
        long rev=0;
        int lastdigit;
        while(y){
            lastdigit=y%10;
            rev=(rev*10+lastdigit);
            y/=10;
        }
        if(rev==x){
            return true;
        } else{
            return false;
        }
    }
};