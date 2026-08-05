class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>list(mp.begin(),mp.end());
        sort(list.begin(),list.end(),[](auto &a, auto &b){
            if(a.second==b.second){
                return a.first< b.first;
            }
            return a.second>b.second;
        });
        string ans="";
        for(auto &it: list){
            for(int i=0;i<it.second;i++){
                ans+=it.first;
            }
        }
        return ans;
    }
};