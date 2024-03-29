class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        int sum=0;
        for(int it:nums){
            sum+=it;
            if(mp.find(sum-goal)!=mp.end()){
                cnt+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return cnt;
    }
};