class Solution {
    public void duplicateZeros(int[] arr) {
        int n=arr.length;
        int zerocount=0;

        for(int i=0;i<n;i++){
           if(arr[i]==0){
            zerocount++;
           }
        }
        for(int i=n-1;i>=0;i--){
            if((i+zerocount)<n){
                arr[i+zerocount]=arr[i];
            }

            if(arr[i]==0){
                zerocount--;
                if((i+zerocount)<n){
                    arr[i+zerocount]=0;
                }
            }
        }
    }
}