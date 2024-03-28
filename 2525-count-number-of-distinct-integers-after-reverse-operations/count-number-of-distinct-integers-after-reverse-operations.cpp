class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s;
        for(auto it:nums){
            s.insert(it);
        }
        for(auto it:nums){
            int rev=0;
            while(it>0){
                int rem=it%10;
                rev=rev*10+rem;
                it/=10;

            }
            s.insert(rev);
        }
        return s.size();
    }
};