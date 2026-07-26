class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int pro=1;
        int largest=INT_MIN;
        int slargest=INT_MIN;
        int tlargest=INT_MIN;
        int smallest=INT_MAX;
        int ssmallest=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                tlargest=slargest;
                slargest=largest;
                largest=nums[i];
            }else if(nums[i]>slargest){
                tlargest=slargest;
                slargest=nums[i];
            }else if(nums[i]>tlargest){
                tlargest=nums[i];
            }
            if(nums[i]<smallest){
                ssmallest=smallest;
                smallest=nums[i];
            }else if(nums[i]<ssmallest){
                ssmallest=nums[i];
            }
        }
        return max(largest*slargest*tlargest,largest*smallest*ssmallest);
    }
};