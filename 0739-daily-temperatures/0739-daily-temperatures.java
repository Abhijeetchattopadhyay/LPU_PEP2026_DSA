class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n=temperatures.length;
        ArrayList<Integer>result = new ArrayList<>();
        Stack<Integer>st =new Stack<>();
        for(int i=0;i<n;i++){
            result.add(0);
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.peek()]<= temperatures[i]){
                st.pop();
            }
            if(st.empty()){
                result.set(i,0);
            }else{
                result.set(i,st.peek()-i);
            }
            st.push(i);
        }
        int [] arr =new int[result.size()];
        for(int i=0;i<result.size();i++){
            arr[i]= result.get(i);
        }
        return arr;
    }
}