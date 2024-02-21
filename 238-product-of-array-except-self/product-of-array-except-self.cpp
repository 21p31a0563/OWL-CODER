class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product(n);
        int temp = 1;
        for(int i=0;i<n;++i) {
            product[i] = temp;
            temp *= nums[i];
        }
        temp = 1;
        for(int i=n-1;i>=0;i--) {
            product[i] *= temp;
            temp *= nums[i];
        }
        return product;
    }
};