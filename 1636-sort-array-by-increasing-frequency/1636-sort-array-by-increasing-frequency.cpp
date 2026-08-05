class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>list(mp.begin(),mp.end());

        sort(list.begin(),list.end(),[](auto &a , auto &b){
            if(a.second==b.second){
                return b.first < a.first;
            }
            return a.second < b.second;
        });

        vector<int>ans;
        for(auto &it: list){
            for(int i=0;i<it.second;i++){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};