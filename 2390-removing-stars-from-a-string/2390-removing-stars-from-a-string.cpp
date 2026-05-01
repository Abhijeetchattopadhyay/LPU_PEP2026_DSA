class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        string b="";
        for(int i=0;i<n;i++){
           if(s[i]=='*'){
              if(!b.empty()){
                 b.pop_back();
              }else{
                continue;
              }
           }else{
              b.push_back(s[i]);
           }
        }

        return b;
    }
};