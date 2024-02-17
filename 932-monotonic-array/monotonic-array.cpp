class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing=true;
        bool decreasing=true;
        for(int i=1;i<nums.size();++i){
            if(nums[i-1]<nums[i]){
                decreasing=false;
            }
            else if(nums[i-1]>nums[i]){
                increasing=false;
            }
        }
        return increasing||decreasing;
    }
};