class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                ans=mid;
                break;
            }else if(nums[mid]>=nums[start]){
                if(nums[start]<=target&& target<=nums[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else if(nums[mid]<=nums[end]){
                if(nums[mid]<=target && target<=nums[end]){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return ans;
    }
};