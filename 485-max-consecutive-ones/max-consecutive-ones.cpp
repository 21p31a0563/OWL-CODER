class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxe=0;
        int cnt=0;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                maxe=max(maxe,cnt);
                cnt=0;
            }
            
        }
        maxe=max(maxe,cnt);
        return maxe;
        
    }
};