class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;

        }
        for(auto it:mp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                ans.push_back(i);
            }

        }
        return ans;
    }
};