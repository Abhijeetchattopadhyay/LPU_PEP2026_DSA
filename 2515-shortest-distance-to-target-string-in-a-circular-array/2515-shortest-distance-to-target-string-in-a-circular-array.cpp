class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int mindis=INT_MAX;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                int forward=(i-startIndex+n)%n;
                int backward=(startIndex-i+n)%n;
                mindis=min(mindis,min(forward,backward));
            }
        }
        if(mindis==INT_MAX) return -1;
        return mindis;
    }
};