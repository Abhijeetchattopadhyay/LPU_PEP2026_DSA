class Solution {
    public int bagOfTokensScore(int[] tokens, int power) {
        int score=0;
        int score1=0;
        Arrays.sort(tokens);
        int i=0;
        int j=tokens.length-1;
        while(i<=j){
            if(tokens[i]<=power){
                score++;
                score1=Math.max(score,score1);
                power=power-tokens[i];
                i++;
            }else if(tokens[i]>power && score!=0){
                power=power+tokens[j];
                score--;
                j--;
            }else{
                break;
            }
        }
        return score1;
    }
}