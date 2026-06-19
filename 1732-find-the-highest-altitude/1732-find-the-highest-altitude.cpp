class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int curralt=0;
        int maxaltitude=0;
        for(int i=0;i<n;i++){
            curralt+=gain[i];
            maxaltitude=max(curralt,maxaltitude); 
        }
        return maxaltitude;
    }
};