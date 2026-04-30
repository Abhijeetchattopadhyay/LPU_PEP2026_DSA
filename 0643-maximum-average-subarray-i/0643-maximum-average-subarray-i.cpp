class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        double sum = 0;
        double maxsum = INT_MIN;
        for(int i = 0; i < k; i++){
            sum += nums[i];
            
        }
        maxsum = max(sum,maxsum);
        for(int i = k; i <n; i++){
            sum -= nums[i - k];
            sum += nums[i];
            maxsum = max(sum,maxsum);

        }
        double avg = maxsum/k;
        return avg;
    }
};