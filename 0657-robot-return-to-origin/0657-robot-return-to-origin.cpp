class Solution {
public:
    bool judgeCircle(string moves) {
        int s=moves.size();
        int lcount=0;
        int rcount=0;
        int ucount=0;
        int dcount=0;
        for(int i=0;i<s;i++){
            if(moves[i]=='L'){
                lcount++;
            }
            else if(moves[i]=='R'){
                rcount++;
            }else if(moves[i]=='U'){
                ucount++;
            }else{
                dcount++;
            }
        }
        if((lcount-rcount)==0 && (ucount-dcount)==0){
                return true;
            
        }
        return false;
    }
};