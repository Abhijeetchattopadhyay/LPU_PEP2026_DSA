class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxfreq=0;
        for(auto it:mp){
            maxfreq=max(maxfreq,it.second);
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==maxfreq){
                ans+=it.second;
            }
        }
        return ans;
    }
};