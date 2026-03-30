class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0;
        long long maxsum=0;
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            freq[nums[i]]++;
        }
        if(freq.size()==k){
            maxsum=sum;
        }
        for(int i=k;i<n;i++){
             freq[nums[i-k]]--;
             if(freq[nums[i-k]]==0){
                freq.erase(nums[i-k]);
             }
             freq[nums[i]]++;
             sum-=nums[i-k];
             sum+=nums[i];
        if(freq.size()==k){
            maxsum= max(maxsum,sum);
        }
        }
        return maxsum;
    }
};