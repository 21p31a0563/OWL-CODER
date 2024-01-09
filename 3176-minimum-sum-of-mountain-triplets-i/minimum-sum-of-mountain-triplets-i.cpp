class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int res=INT_MAX,n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++){
                    if(nums[i]<nums[j]&&nums[k]<nums[j]){
                        res=min(res,nums[i]+nums[j]+nums[k]);
                    }
                }
            }
        }
        if(res==INT_MAX){
            return -1;
        }
        return res;
    }
};