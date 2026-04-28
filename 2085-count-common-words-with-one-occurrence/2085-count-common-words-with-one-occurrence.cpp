class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        int count=0;
        int n1=words1.size();
        int n2=words2.size();
        for(int i=0;i<n1;i++){
            mp1[words1[i]]++;
        }
        for(int i=0;i<n2;i++){
            mp2[words2[i]]++;
        }
        for(auto it:mp1){
            if(it.second==1 && mp2[it.first]==1){
                 count++;
            }
        }
        return count;
    }
};