class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int n=nums[i];
            stack<int>temp;
            while(n>0){
                int lastdigit=n%10;
                temp.push(lastdigit);
                n/=10;
            }
            
            while(!temp.empty()){
                ans.push_back(temp.top());
                temp.pop();
        }
        }

        return ans;
    }
};