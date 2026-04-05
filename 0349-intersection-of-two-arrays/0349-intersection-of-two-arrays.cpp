class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_set<int>s(nums1.begin(),nums1.end());
        for(auto it:nums2){
            if(s.find(it)!=s.end()){
                result.push_back(it);
                s.erase(it);
            }
        }
        return result;
    }
};