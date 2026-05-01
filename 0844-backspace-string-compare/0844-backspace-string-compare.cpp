class Solution {
public:
    bool backspaceCompare(string s, string t) {
       string a="";
       string b="";
       for(int i=0;i<s.size();i++){
           if(s[i]=='#'){
             if(!a.empty()){
                a.pop_back();
             }else{
                continue;
             }
           }else{
              a.push_back(s[i]);
           }
       }
       for(int i=0;i<t.size();i++){
           if(t[i]=='#'){
              if(!b.empty()){
                 b.pop_back();
              }else{
                continue;
              }
           }else{
              b.push_back(t[i]);
           }
       }
       if(a==b){
        return true;
       }else{
        return false;
       }

    }
};