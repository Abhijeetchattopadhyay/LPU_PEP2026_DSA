class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>>car;
        for(int i=0;i<n;i++){
            car.push_back({position[i],speed[i]});
        }
        sort(car.begin(),car.end());

        double previoustime=0;
        int fleet=0;
        for(int i=n-1;i>=0;i--){
            double currtime=(double)(target-car[i].first)/car[i].second;
            if(currtime>previoustime){
                fleet++;
                previoustime=currtime;
            }
        }
        return fleet;
    }
};