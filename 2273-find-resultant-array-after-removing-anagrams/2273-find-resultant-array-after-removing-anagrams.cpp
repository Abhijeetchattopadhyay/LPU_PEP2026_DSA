class Solution {
public:
    bool isAnagram(string a,string b){
        if(a.size()!=b.size()){
            return false;
        }
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<a.size();i++){
            m1[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            m2[b[i]]++;
        }
        if(m1==m2) {
            return true;
        }    
        else{ 
           return false;
        }
        
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>ans;
        string s=words[0];
        ans.push_back(words[0]);
        for(int i=1;i<n;i++){
          string s1=words[i];
          if(!isAnagram(s,s1)){
            ans.push_back(words[i]);
          }
         s=words[i];
        }
        return ans;
    }
};