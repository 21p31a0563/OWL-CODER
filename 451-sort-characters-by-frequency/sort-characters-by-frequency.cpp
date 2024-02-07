class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>v;
        map<char,int>mp;
      for(auto i:s){
          mp[i]++;
      }
      for(auto it:mp){
          v.push_back({it.second,it.first});
      }
      sort(v.rbegin(),v.rend());
      string ans;
      for(auto it:v){
          for(int j=0;j<it.first;j++){
              ans+=it.second;
          }
      }
      return ans;
    }
};