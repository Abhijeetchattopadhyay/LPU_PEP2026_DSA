class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxwater = 0;
        int n = height.size();
        int water = 0;
        int left = 0;
        int right = n - 1;
        while(left < right){
            water = min(height[left],height[right]) * (right - left);
            maxwater = max(maxwater, water);
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxwater;
    }
};