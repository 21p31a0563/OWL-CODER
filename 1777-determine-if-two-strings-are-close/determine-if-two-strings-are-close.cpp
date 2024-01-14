class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
       for(char ch :word1){
           mp1[ch]++;
       }
       for(char ch :word2){
           mp2[ch]++;
       }
       vector<int>v1;
        for(auto it:mp1)
       {
            v1.push_back(it.second);
       }
       vector<int>v2;
       for(auto it:mp2){
           v2.push_back(it.second);
       }
    for(auto it :mp1)
    {
        if(mp2.find(it.first)==mp2.end()){
            return false;
        }
    }
       sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
       if(v1!=v2){
           return false;
       }
       return true;
    }
};