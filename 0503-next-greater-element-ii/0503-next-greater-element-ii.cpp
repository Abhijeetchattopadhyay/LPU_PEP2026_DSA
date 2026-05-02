class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            int index=i%n;
            while(!st.empty() && st.top()<=nums[index]){
                 st.pop();
            }
            if(st.empty()){
                result[index]=-1;
            }else{
                result[index]=st.top();
            }
            st.push(nums[index]);
        }

        return result;
    }
};