class Solution {
public:
    int minSteps(string s, string t) {
      map<char,int>mp;
      for(int i=0;i<s.length();i++){
          mp[s[i]]++;
          mp[t[i]]--;
      }
      int cnt=0;
      for(auto it:mp){
          if(it.second>0){
              cnt+=it.second;
          }
      }
      return cnt;
    }

};