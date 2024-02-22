class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                v.push_back(nums[i]);
            }
        }
        int j=0;
        for(auto k:v){
            nums[j]=k;
            j++;
        }
        for(int i=v.size();i<n;i++){
            nums[i]=0;
        }

    }
};