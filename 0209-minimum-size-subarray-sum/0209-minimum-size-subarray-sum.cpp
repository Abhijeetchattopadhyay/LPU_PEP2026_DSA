class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int sum=0;
        int minlength=INT_MAX;
        for(int i=0;i<n;i++){
           sum+=nums[i];
           while(sum>=target){
             minlength=min(minlength,i-j+1);
             sum=sum-nums[j];
             j++;
           }
        }
        if(minlength==INT_MAX) return 0;
        return minlength;
    }
};