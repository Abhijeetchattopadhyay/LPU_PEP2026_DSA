class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0;
        int maxsum=0;
        int j=0;
        for(int i=0;i<n;i++){
            while(mp.find(nums[i])!=mp.end()){
                mp[nums[j]]--;
                sum=sum-nums[j];
                if(mp[nums[j]]==0){
                    mp.erase(nums[j]);
                }
                j++;
            }
            sum+=nums[i];
            maxsum=max(sum,maxsum);
            mp[nums[i]]++;
        }
        return maxsum;
    }
};