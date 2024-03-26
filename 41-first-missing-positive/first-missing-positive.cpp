class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       map<int,int>mp;
       for(auto it:nums){
        mp[it]++;
       }
      int maxi=*max_element(nums.begin(),nums.end());
      for(int i=1;i<maxi;i++){
        if(mp.find(i)==mp.end()){
            return i;
        }
      }
      return maxi<0?1:maxi+1;
  
    }
};