class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int ans=-1;
            int maxnum=0;
        for(auto it:mp){
            if(it.second==it.first){
               if(it.second>maxnum){
                  maxnum=it.first;
               }
               ans=max(ans,it.first);
            }
        }
        return ans;
    }
};