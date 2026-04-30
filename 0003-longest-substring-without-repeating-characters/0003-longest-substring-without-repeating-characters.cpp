class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>mp1;
        int j=0;
        int maxlength=0;
        for(int i=0;i<n;i++){
            while(mp1.find(s[i])!=mp1.end()){
               mp1[s[j]]--;
               if(mp1[s[j]]==0){
                   mp1.erase(s[j]);
               }
               j++;
            }
               mp1[s[i]]++;
               maxlength=max(maxlength,i-j+1);
        }
        return maxlength;
    }
};