class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0;
        int m=n;
        while(m>0){
           int lastdigit=m%10;
           rev=(rev*10)+lastdigit;
           m/=10;
        }
        return abs(n-rev);
        
    }
};