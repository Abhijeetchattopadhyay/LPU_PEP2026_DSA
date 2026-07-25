class Solution {
public:
    int numberOfSubstrings(string s) {
       vector<int>result(3,0);
       int i=0;
       int j=0;
       int count=0;
       int n=s.size();
       while(j<n){
           result[s[j]-'a']++;
        while(result[0]>0 && result[1]>0 && result[2]>0){
           count+=n-j;
           result[s[i]-'a']--;
           i++;
        }
        j++;
       } 
       return count;
    }
};