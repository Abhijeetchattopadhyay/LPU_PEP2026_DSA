class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int difference=0;
        int maxdifference=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(nums[i]<nums[j]){
                    difference=nums[j]-nums[i];
                    maxdifference=max(difference,maxdifference);
                }
            }
        }
        return maxdifference;
    }
};