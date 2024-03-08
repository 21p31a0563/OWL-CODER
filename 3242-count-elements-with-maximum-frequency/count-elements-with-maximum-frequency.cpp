class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
            map<int, int> mp;
        
        for (auto it : nums) {
            mp[it]++;
        }

        int maxfreq = INT_MIN;
        int cnt = 0;

       
        for (auto it : mp) {
            if (it.second > maxfreq) {
                maxfreq = it.second;
            }
        }

      
        for (auto it : nums) {
            if (mp[it] == maxfreq) {
                cnt+=1;
            }
        }

        return cnt;
    }
};