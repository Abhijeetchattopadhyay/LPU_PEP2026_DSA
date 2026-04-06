class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2) return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<n1;i++){
            m1[s[i]]++;
        }
        for(int i=0;i<n2;i++){
            m2[t[i]]++;
        }
        if(m1==m2){
            return true;
        }else{
            return false;
        }
    }
};