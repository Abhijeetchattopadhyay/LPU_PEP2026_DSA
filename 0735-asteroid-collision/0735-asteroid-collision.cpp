class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        int n=asteroids.size();
        int sum=0;
        for(int i=0;i<n;i++){
            bool destroyed=false;
        while(!st.empty() && st.top()>0 && asteroids[i]<0){
             sum=st.top()+asteroids[i];
            if(sum>0){
                destroyed=true;
                break;
            }else if(sum<0){
                st.pop();
                // destroyed=true;
            } else if(sum==0){
                st.pop();
                destroyed=true;
                break;
            }
        }
        if(!destroyed){
            st.push(asteroids[i]);
          }
        }

        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};