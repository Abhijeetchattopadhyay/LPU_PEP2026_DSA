class Solution {
    public int maxArea(int[] height) {
        int n=height.length;
        int maxarea=Integer.MIN_VALUE;
        int area=1;
        int i=0;
        int j=n-1;
        while(i<j){
            if(height[i]<=height[j]){
                int width=j-i;
                area=height[i]*width;
                i++;
            }else{
                int width=j-i;
                area=height[j]*width;
                j--;
            }
            maxarea=Math.max(area,maxarea);
        }

        return maxarea;

    }
}