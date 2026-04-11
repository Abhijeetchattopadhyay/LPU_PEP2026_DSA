class Solution {
public:
    bool isAnagram(string a,string b){
        int n1=a.size();
        int n2=b.size();
        if(n1!=n2){
            return false;
        }
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<n1;i++){
             m1[a[i]]++;
        }
        for(int i=0;i<n1;i++){
             m2[b[i]]++;
        }
        if(m1==m2){
            return true;
        }else{
            return false;
        }
    }
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<string,vector<string>>result;
        vector<string>ans;
        int n=words.size();
        string s=words[0];
        ans.push_back(s);
        for(int i=1;i<n;i++){
           string s1=words[i];
           if(!isAnagram(s,s1)){
               ans.push_back(words[i]);
               s=words[i];
           }
        }
        return ans;
    }
};