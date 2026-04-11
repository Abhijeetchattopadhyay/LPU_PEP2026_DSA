class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m1;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            m1[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:m1){
            ans.push_back(it.second);
        }
        return ans;
    }
};