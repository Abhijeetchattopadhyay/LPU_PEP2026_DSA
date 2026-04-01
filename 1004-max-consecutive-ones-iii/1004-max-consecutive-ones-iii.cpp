class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j=0;
        int n=nums.size();
        int zerocount=0;
        int maxcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[j]==0){
                    zerocount--;
                }
                j++;
            }
            maxcount=max(maxcount,i-j+1);
        }
        return maxcount;
    }
};