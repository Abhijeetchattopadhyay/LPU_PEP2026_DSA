class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>freq;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second==2){
                freq.push_back(it.first);
            }
        }
        return freq;
        
    }
};