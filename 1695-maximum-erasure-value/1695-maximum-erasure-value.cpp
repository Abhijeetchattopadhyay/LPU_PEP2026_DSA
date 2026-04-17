class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>s;
        int n=nums.size();
        int j=0;
        int sum=0;
        int maxsum=0;
        for(int i=0;i<n;i++){
            while(s.find(nums[i])!=s.end()){
                sum=sum-nums[j];
                s.erase(nums[j]);
                j++;
            }
            s.insert(nums[i]);
            sum+=nums[i];
            maxsum=max(maxsum,sum);

        }
        return maxsum;
    }
};