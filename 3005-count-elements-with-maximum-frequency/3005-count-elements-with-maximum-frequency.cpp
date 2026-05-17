class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxfreq=INT_MIN;
        for(auto it:mp){
            if(it.second>maxfreq){
                maxfreq=it.second;
            }
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