class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       long long prefsum=nums[0]+nums[1];
       long long ans=0;
       for(int i=2;i<nums.size();i++){
           if(prefsum>nums[i]){
               ans=max(ans,prefsum+nums[i]);
           }
           prefsum+=nums[i];
       }
       if(ans==0){
           return -1;
       }
       else{
           return ans;
       }
    }
};