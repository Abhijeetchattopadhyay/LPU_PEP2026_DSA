class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int count=0;
        int n=arr.size();
        int totalsum=0;
        for(int i=0;i<n;i++){
            totalsum+=arr[i];
        }
        if(totalsum%3!=0){
            return false;
        }
        int currsum=0;
        int target=totalsum/3;
        for(int i=0;i<n;i++){
             currsum+=arr[i];
             if(currsum==target){
                count++;
                currsum=0;
             }
        }
        return count>=3;
    }
};