class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int res=0,product=1,left=0;
        for(int right=0;right<nums.size();right++){
            product*=nums[right];
            while(product>=k&&left<=right){
                product/=nums[left];
                left++;
            }
            res+=right-left+1;
        }
        return res;
    }
};