class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1=s.size();
        int n2=p.size();
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        vector<int>result;
        for(int i=0;i<n2;i++){
            m2[p[i]]++;
        }
        int j=0;
        for(int i=0;i<n2;i++){
            m1[s[i]]++;
            if(m1==m2){
                result.push_back(j);
            }

        }
        for(int i=n2;i<n1;i++){
            m1[s[j]]--;
            if(m1[s[j]]==0){
                m1.erase(s[j]);
            }
            j++;
            m1[s[i]]++;
            if(m1==m2){
                result.push_back(j);
            }
        }
        return result;
    }
};