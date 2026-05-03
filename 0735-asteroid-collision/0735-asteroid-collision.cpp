class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>st;
        for(int i=0;i<n;i++){
        int sum=0;
             bool destroy=false;
        while(!st.empty() && st.top()>0 && asteroids[i]<0){
             sum=st.top()+asteroids[i];
             if(sum>0){
                 
                 destroy=true;
                 break;
             }else if(sum==0){
                st.pop();
                destroy=true;
                break;
             }else{
                st.pop();
             }
        }
        if(!destroy){
            st.push(asteroids[i]);
        }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};