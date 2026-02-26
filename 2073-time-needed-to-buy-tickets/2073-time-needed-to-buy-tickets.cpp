class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        queue<int>q;
        int time=0;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        while(!q.empty()){
            int p=q.front();
            q.pop();
            tickets[p]--;
            time++;
            if(p==k  && tickets[p]==0){
                return time;
            }
            if(tickets[p]>0){
                q.push(p);
            }
        }
        return time;
    }
};