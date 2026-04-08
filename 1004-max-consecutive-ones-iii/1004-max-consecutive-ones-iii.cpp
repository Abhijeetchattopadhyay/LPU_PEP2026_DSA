class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();\
        int zerocount=0;
        int j=0;
        int maxlength=0;
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

             maxlength=max(maxlength,i-j+1);
        }
        return maxlength;
    }
};