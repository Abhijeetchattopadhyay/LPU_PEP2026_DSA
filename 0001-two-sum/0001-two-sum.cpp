class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            while(mp.find(rem)!=mp.end()){
                if(nums[i]+rem==target){
                    return {i,mp[rem]};
                }
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};