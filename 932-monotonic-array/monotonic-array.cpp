class Solution {
public:
    bool isAcending(vector<int>&nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
                return false;             
        }
        return true;
    }
     bool isDecending(vector<int>&nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])
                return false;             
        }
        return true;
    }

    bool isMonotonic(vector<int>& nums) {
        return isAcending(nums)||isDecending(nums);
    }
};