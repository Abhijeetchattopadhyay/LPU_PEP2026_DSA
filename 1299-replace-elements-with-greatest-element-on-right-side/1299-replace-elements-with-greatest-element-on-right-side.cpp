class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int greaterelement=-1;
        for(int i=n-1;i>=0;i--){
            int curr=arr[i];
            arr[i]=greaterelement;
            greaterelement=max(greaterelement,curr);
        }
        return arr;
    }
};