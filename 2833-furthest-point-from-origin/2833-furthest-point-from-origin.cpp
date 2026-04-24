class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left=0;
        int right=0;
        int blank=0;
        int n=moves.size();
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                left++;
            }else if(moves[i]=='R'){
                right++;
            }else{
                blank++;
            }
        }
        return abs(left-right)+blank;
    }
};