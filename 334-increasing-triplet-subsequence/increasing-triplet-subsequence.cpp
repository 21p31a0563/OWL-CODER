class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstsmall=INT_MAX;
        int secondsmall=INT_MAX;
        if (nums.size() < 3) {
            return false;
        }
        for(auto i:nums)
        {
            if(i<=firstsmall)
            {
                firstsmall=i;
            }
            else if(i<=secondsmall)
            {
                secondsmall=i;
            }
            else {
                return true;
            }
            
        }
        return false;
    }
};