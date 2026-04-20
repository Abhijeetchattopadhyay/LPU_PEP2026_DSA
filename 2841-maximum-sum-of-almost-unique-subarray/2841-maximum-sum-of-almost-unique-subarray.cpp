class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        long long sum=0;
        long long maxsum=0;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            sum+=nums[i];
        }
        if(mp.size()>=m){
            maxsum=sum;
        }

        for(int i=k;i<n;i++){
            mp[nums[i]]++;
            sum=sum+nums[i]-nums[i-k];
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]==0){
                mp.erase(nums[i-k]);
            }
            if(mp.size()>=m){
                maxsum=max(sum,maxsum);
            }
        }
        return maxsum;
    }
};