class Solution {
    public void swap(String []ans, int i , int j){
        String temp=ans[i];
        ans[i]=ans[j];
        ans[j]=temp;
    }
    public String reverseWords(String s) {
        String [] ans=s.trim().split("\\s+");
        int i=0;
        int j=ans.length-1;
        while(i<j){
            swap(ans,i,j);
            i++;
            j--;
        }
        return String.join(" ",ans);
    }
}