class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstsmall=INT_MAX;
        int secondsmall=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=firstsmall)
            {
                firstsmall=nums[i];
            }
            else if(nums[i]<=secondsmall)
            {
                secondsmall=nums[i];
            }
            else {
                return true;
            }
            
        }
        return false;
    }
};