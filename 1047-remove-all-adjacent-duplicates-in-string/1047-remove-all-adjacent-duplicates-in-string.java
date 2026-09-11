class Solution {
    public String removeDuplicates(String s) {
        int n=s.length();
        Stack<Character> st = new Stack<>();
        for(int i=0;i<n;i++){
            if(!st.isEmpty() && s.charAt(i)==st.peek()){
                st.pop();
            }else{
                st.push(s.charAt(i));
            }
        }
        StringBuilder a = new StringBuilder();
        while(!st.isEmpty()){
            a.append(st.peek());
            st.pop();
        }
        a.reverse();
        return a.toString();
    }
}