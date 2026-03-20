class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            p.push({it.second,it.first});
            if(p.size()>k){
                p.pop();
            }
        }
        vector<int>result;
        while(!p.empty()){
            result.push_back(p.top().second);
            p.pop();
        }
        return result;
        
    }
};