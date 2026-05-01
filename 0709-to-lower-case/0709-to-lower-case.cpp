class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
            ans+=s[i];
        }
        return ans;
    }
};