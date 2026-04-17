class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
            mp[nums[i]]++;
            }
        }
        vector<int>ans;
        for(auto it:mp){
            ans.push_back(it.first);
        }
        
        if(ans.empty() || ans[0]!=1){
            return 1;
        }
        for(int i=1;i<ans.size();i++ ){

            if(ans[i]-ans[i-1]==1){
                continue;
            }else{
                 return ++ans[i-1];
            }
        }

        return ++ans.back();


    }
};