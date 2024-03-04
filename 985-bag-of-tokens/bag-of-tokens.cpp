class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
      sort(tokens.begin(),tokens.end());  
 int score=0;
       int n=tokens.size();
       int j=n-1;
       int maxscore=INT_MIN;
       int i=0;
       while(i<=j){
           if(power>=tokens[i]){
               power=power-tokens[i];
               score++;
               i++;
           }
           else if(score>=1){
               power=power+tokens[j];
               maxscore=max(maxscore,score);
               score--;
               j--;
           }
           else{
               break;
           }
       }
       maxscore=max(maxscore,score);
       return maxscore; 
    }
};