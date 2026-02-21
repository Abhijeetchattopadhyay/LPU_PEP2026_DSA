class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string words="";
        string sentence="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                words+=s[i];
            }
            if(s[i]==' ' && words!=""){
                st.push(words);
                words="";
            }   
        }
         if(words!=""){
               st.push(words);
            }
        while(!st.empty()){
            sentence+=st.top();
            st.pop();
            if(!st.empty()){
                sentence+=" ";
            }
        }
     return sentence;
    }
};