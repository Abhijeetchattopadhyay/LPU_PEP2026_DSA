class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefixsum=0;
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            int target=prefixsum-k;
            if(mp.find(target)!=mp.end()){
                count+=mp[target];
            }
            mp[prefixsum]++;
        }
        return count;
    }
};