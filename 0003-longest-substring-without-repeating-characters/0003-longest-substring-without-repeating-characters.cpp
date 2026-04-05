class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxlength=0;
        int j=0;
        unordered_set<char>s1;
        for(int i=0;i<n;i++){
            while(s1.find(s[i])!=s1.end()){
                s1.erase(s[j]);
                j++;  
            }
            s1.insert(s[i]);
            maxlength=max(maxlength,i-j+1);
        }
        return maxlength;
    }
};