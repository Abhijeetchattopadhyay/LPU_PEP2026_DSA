class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                int new_score=2*st.top();
                st.push(new_score);
            }
            else if(operations[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);

            }
            else{
                int x=stoi(operations[i]);
                st.push(x);
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }

        return sum;
    }
};