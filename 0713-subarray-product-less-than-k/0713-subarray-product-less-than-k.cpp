class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int count=0;
        int n=nums.size();
        int pro=1;
        int j=0;
        for(int i=0;i<n;i++){
            pro=pro*nums[i];
            while(pro>=k){
                pro/=nums[j];
                j++;
            }
            count+=i-j+1;
        }
        return count;
    }
};