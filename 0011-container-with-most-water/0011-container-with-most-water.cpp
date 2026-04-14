class Solution {
public:
    int maxArea(vector<int>& height) {
        int j=height.size()-1;
        int i=0;
        int maxarea=0;
        while(i<j){
             if(height[i]<height[j]){
                maxarea=max(maxarea,(j-i)*height[i]);
                i++;
             }else{
                maxarea=max(maxarea,(j-i)*height[j]);
                j--;
             }
        }
        return maxarea;
    }
};