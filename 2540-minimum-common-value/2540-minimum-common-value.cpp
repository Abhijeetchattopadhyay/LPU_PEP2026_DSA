class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set;
        for(int i=0;i<nums1.size();i++){
            set.insert(nums1[i]);
        }
        int ans=INT_MAX;
        for(int i=0;i<nums2.size();i++){
            if(set.find(nums2[i])!=set.end()){
                ans=min(ans,nums2[i]);
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};