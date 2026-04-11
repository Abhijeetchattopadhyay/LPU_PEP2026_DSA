class Solution {
public:
    int maxPower(string s) {
        int j=0;
        int n=s.size();
        int count=1;
        int maxlength=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                count++;
            }else{
                count=1;
            }
            maxlength=max(count,maxlength);

        }
        return maxlength;
    }
};