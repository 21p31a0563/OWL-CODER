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
          
              ans+=string(it.first,it.second);
          
      }
      return ans;
    }
};