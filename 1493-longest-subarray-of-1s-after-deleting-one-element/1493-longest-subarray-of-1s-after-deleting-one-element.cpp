class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0;
        int n=nums.size();
        int j=0;
        int ones=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            while(zero>1){
                if(nums[j]==0){
                    zero--;
                }
                j++;
            }
            ones=max(ones,i-j);
            
        }
        return ones;
    }
};