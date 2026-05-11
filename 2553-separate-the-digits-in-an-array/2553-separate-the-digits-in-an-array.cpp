class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int n=nums[i];
            vector<int>temp;
            while(n>0){
                int lastdigit=n%10;
                temp.push_back(lastdigit);
                n/=10;
            }
            reverse(temp.begin(),temp.end());
            for(int i=0;i<temp.size();i++){
                ans.push_back(temp[i]);
            }
        }

        return ans;
    }
};