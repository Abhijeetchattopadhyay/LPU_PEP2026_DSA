class Solution {
public:
    bool ispalindrome(string words){
        int i=0;
        int j=words.size()-1;
        while(i<=j){
            if(words[i]!=words[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            if(ispalindrome(words[i])){
                return words[i];
                break;
            }
        }
        return "";
    }
};