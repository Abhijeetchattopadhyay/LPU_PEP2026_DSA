class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int profit=0;
        int totalprofit=0;
        int minelement = prices[0];
        for(int i=1;i<n;i++){
            minelement=Math.min(prices[i],prices[i-1]);  
            profit=prices[i]-minelement;
            totalprofit+=profit; 
        }
        return totalprofit;
    }
}