
class Solution {
    int rev(int n) {
        int rev = 0;
        int temp = n;
        while (temp > 0) {
            int rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        return rev;
    }
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> v;
        for (auto it : nums) {
            v.push_back(it);
            int a = rev(it);
            v.push_back(a);
        }
        
        map<int, int> mp;
        for (auto it : v) {
            mp[it]++;
        }
        
        return mp.size(); // Return the size of the map, which represents the count of distinct integers
    }
};
