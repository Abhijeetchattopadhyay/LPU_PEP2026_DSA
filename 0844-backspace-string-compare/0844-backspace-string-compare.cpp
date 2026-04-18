class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();
        int m=t.size();
        string a="";
        string b="";
        for(int i=0;i<n;i++){
            if( s[i]=='#'){
                if(!a.empty()){
                a.pop_back();
                }
            }else{
                a+=s[i];
            }
        }
        for(int i=0;i<m;i++){
            if( t[i]=='#'){
                if(!b.empty()){
                b.pop_back();
                }
            }else{
                b+=t[i];
            }
        }
        if(a==b){
            return true;
        }else{
            return false;
        }
    }
};